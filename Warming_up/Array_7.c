#include<stdio.h>
int main()
{
    int sum = 0;
    int matrin1[3][3] = {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i < j){
                sum += matrin1[i][j];  
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}