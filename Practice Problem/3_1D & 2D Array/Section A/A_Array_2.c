// Read five integers from the user and print them using an integer array.
#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 integer : \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    printf("The five integer you entered are\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}