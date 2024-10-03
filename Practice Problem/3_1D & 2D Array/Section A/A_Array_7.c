//Create an integer array of size 5 read 10 integers into this array and print the integers. (Make a comment on the output.)
#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter the element in an array\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    printf("The element you entered are\n");
    for(int i = 0; i < 10; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}