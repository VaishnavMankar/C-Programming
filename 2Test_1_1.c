#include<stdio.h>
int main()
{
    int arr[5] = {0};
    printf("Enter 5 element of an array: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("The sum off all element of an array is %d\n",sum);
    
    int product = 1;
    for(int i = 0; i < 5; i++){
        product *= arr[i];
    }
    printf("the product of all the element of an array is %d\n",product);
    return 0;
}