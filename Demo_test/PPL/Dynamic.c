#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr;
    printf("Enter the length of an array: \n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the array\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&ptr[i]);
    }
    for(int i = 0;i < n; i++){
        printf("%d\n",ptr[i]);
    }
    return 0;

}
