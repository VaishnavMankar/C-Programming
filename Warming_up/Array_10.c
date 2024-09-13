#include<stdio.h>
int main()
{
    int temp;
    int matrix1[3] = {1,2,3};
    int matrix2[3][3] = {
        {5,1,2},
        {2,5,6},
        {1,2,8}
    };
    int matrix3[1][3]={0};

    for(int i = 0; i < 3; i++){
        temp = 0;
        for(int j = 0; j < 3; j++){
            temp += matrix1[j] * matrix2[j][i];
        }
        matrix3[0][i] = temp;
    }
    for(int i = 0; i < 1; i++){ 
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}