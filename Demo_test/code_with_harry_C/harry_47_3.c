#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Enter the value of %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("The value of %d of the array is %d \n",i,ptr[i]);
    }

    printf("Enter the size of the  new array you want to create");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr, n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Enter the value of %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("The value of %d of the array is %d \n",i,ptr[i]);
    }
    free(ptr);

    return 0;
}