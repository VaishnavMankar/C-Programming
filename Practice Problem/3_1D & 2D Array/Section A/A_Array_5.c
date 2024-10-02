// Read five integers from the user add them and print the addition
#include<stdio.h>
int main()
{
    int arr[5];
    int sum = 0;
    printf("Enter 5 integer : \n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("The addition of 5 integer is %d\n",sum);
    return 0;
}