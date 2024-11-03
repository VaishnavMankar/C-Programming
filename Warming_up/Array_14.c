#include<stdio.h>
int main()
{
    int n = 3;
    int matrix1[3][3] = {
        {5,1,2},
        {1,2,8},
        {2,5,6}
    };
    int matrix2[3][3] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrix2[i][j] = matrix1[i][j];
        }
    }
    for(int j = 0; j < 3; j++){
        matrix2[0][j] *= n;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
