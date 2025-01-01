#include<stdio.h>
int main()
{
    int N[10];
    int sum = 0;
    printf("Enter 10 integer\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&N[i]);
    }
    for(int i = 0; i < 10; i++){
        sum += N[i];
    }
    printf("Sum of 10 integer is %d",sum);
    return 0;
}