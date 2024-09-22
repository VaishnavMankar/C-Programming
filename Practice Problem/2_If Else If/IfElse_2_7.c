#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    if(n < 100){
        printf("The number is small\n");
    }
    if(n > 200){
        printf("The number is large\n");
    }
    else if(n > 1000){
        printf("Its a very large number\n");
    }
    return 0;
}