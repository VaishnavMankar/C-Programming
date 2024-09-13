#include<stdio.h>
int main()
{
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum1 = 0;
    int  sum2 = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                sum1 += matrix[i][j];
            }
            sum2 = matrix[0][2] + matrix[2][0];
        }
    }
    // printf("%d",sum2);
    // printf("%d\n",sum1);
    int sum = sum1 + sum2;
    printf("%d\n",sum);
    return 0;
}