#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(3*sizeof(int));
    for(int i = 0; i < 3; i++){
        printf("Enter the value of %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("The value of %d of the array is %d \n",i,ptr[i]);
    }
    return 0;
}