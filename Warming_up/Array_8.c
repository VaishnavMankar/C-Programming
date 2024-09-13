#include<stdio.h>
int main()
{
    int sum[3][3];
    int matrix1[3][3]= {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    int matrix2[3][3]= {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    } 
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}