#include<stdio.h>
int main()
{
    int row,col;
    
    printf("enter the length of an array : \n");
    scanf("%d %d",&row, &col);
    int arr[row][col];
    printf("enter the element of an array\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is\n");
     for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}