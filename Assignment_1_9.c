#include<stdio.h>
int main()
{
    int i, num;
    unsigned long long factorial = 1;

    printf("enter the number to calculate the factorial = \n");
    scanf("%d", &num);

    while(i <= 1){
        i = num;
            factorial *= i;
            i--;
    }
    printf("%d is the factorial value \n",factorial);
    return 0;
}