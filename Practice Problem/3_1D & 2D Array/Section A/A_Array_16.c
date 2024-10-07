//Read two 2x2 matrices perform their multiplication and print the answer
#include<stdio.h>
int main()
{
    int matrix1[2][2];
    int matrix2[2][2];
    int matrix3[2][2];
    int temp;
    printf("Enter the first 2x2 matrix: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the second 2x2 matrix: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
     for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            temp = 0;
            for(int k = 0;k < 2; k++){
            temp += matrix1[i][k] * matrix2[k][j];  
        }
        matrix3[i][j] = temp;
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}