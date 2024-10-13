//Dynamically create an integer array of size 10, read 10 integers and print the
//sum of all integers stored at even indices. Also, release memory before
//program termination.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int size = 10;
    int sumOFEvens = 0;

    arr = (int *)malloc(size * sizeof(int));

    printf("Enter the 10 numbers:\n");
    for(int i = 0;i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++){
        if(i % 2 == 0){
            sumOFEvens += arr[i];
        }
        
    }

    printf("The sum of all even integer is %d\n",sumOFEvens);

    free(arr);
    return 0;
}