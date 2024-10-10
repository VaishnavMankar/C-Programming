#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int size = 10;

    arr = (int *)malloc(size * sizeof(int)); 

    printf("Enter 10 numbers:\n");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");

    printf("The number you entered are:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}