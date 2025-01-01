#include<stdio.h>
int main()
{
    int matrix[3][3] = {
        {3,7,8},
        {9,11,13},
        {15,16,17},
    };
    int m = 3;
    int n = 3;
    for(int i = 0; i < m; i++){
        int minRowValue = matrix[i][0];
        int minColIndex = 0;       
    for(int j = 1; j < n; j++){
        if(matrix[i][j] < minRowValue){
            minColIndex = j;
        }
    }
    int isMaxInCol = 1;
    for(int k = 0;k < m; k++){
        if(matrix[k][minColIndex]>minRowValue){
            isMaxInCol = 0;
            break;
        }
    }
    if (isMaxInCol) {
            printf("%d\n", minRowValue);
        }
    }
    
    return 0;
 }