//3. WAP to create and read a dynamic NxM 2D array from user and
//a. accept a row number from the user and print all elements from this row
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,row,col;
    printf("Enter the number of rows (m) : ");
    scanf("%d",&m);
    printf("Enter the number of column (n) : ");
    scanf("%d",&n);
    
    int **arr = (int **)malloc(m * sizeof(int *));
    for(int i = 0; i < m; i++){
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    //read the integers fron the user
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //printing the array
    printf("The array you entered is\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the row number you want to print:\n",row);
    scanf("%d",&row);

    if(row >= 0 && row < n){
        printf("Element in the rows are\n");
        for(int j = 0; j < n; j++){
            printf("%d ",arr[row][j]);
        }
        printf("\n");
    }
    else{
        printf("Invalid row number.\n");
    }
    //free the memory
    for(int i = 0; i < m; i++){
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}