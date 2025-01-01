//print this array
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
    //read the integers fron the user
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //free the memory
    for(int i = 0; i < m; i++){
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}