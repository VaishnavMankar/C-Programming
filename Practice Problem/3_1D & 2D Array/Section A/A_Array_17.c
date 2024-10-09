//Read two 3x3 matrices perform their multiplication and print the answer
#include<stdio.h>
int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int matrix3[3][3];
    int temp;
    printf("Enter the first 3x3 matrix: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the second 3x3 matrix: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
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