#include<stdio.h>
int main()
{
    int sum = 0;
    int matrix[3][3]= {
        {1,2,3},
        {1,2,3},
        {1,2,3}
        };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                sum += matrix[i][j];
            }
        }
        // printf("%d",sum);
        // sum = 0;
    }    
    printf("%d\n",sum);
    return 0;
}