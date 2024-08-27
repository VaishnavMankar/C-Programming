#include<stdio.h>
int main()
{
    int arr[10];
    int i,sum = 0;
    for(i = 0; i < 10; i++){
        printf("Enter the %d th term.\n",i);
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < 10; i++){
        sum += arr[i];
    }
    printf("%d",sum);
}