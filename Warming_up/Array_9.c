#include<stdio.h>
int main()
{
    int temp;
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
    int matrix3[3][3] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            temp = 0;
            for(int k = 0;k < 3; k++){
            temp += matrix1[i][k] * matrix1[k][j];  
        }
        matrix3[i][j] = temp;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}