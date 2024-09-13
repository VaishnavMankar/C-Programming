#include<stdio.h>
int main()
{
    int matrix1[3][1]= {
        {1},
        {2},
        {3}
    };
    int matrix2[3][3]={
        {1,2,8},
        {5,1,2},
        {2,5,6}
    };
    int matrix3[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix3[i][j] = matrix2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        matrix3[i][0] += matrix1[i][0];
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    
}