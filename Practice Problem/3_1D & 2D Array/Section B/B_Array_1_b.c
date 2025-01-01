// dynamically allocate a 2D array of size MxN
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n;
    printf("Enter the number of rows (m) : ");
    scanf("%d",&m);
    printf("Enter the number of column (n) : ");
    scanf("%d",&n);
    
    int **arr = (int **)malloc(m * sizeof(int *));
    for(int i = 0; i < m; i++){
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    for(int i = 0; i < m; i++){
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}