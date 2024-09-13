#include<stdio.h>
int main()
{
    int i, num;
    unsigned long long factorial = 1;

    printf("enter the number to calculate the factorial = \n");
    scanf("%d", &num);

    if(num < 0){
        printf("Factorial is not define for negative number\n");
    }
    for(int i = num; i > 1; i--){
        factorial *= i;
    }
    printf("%llu is the factorial value \n",factorial);
    return 0;
}