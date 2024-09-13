#include<stdio.h>
int main()
{
    int sum;
    int matrix[3][3]= {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    for(int j = 0; j < 3; j++){
        sum = 0;
        for(int i = 0; i < 3; i++){
            sum += matrix[i][j];
        }
        printf("Sum is %d\n",sum);
        
    }    
    return 0;
}
