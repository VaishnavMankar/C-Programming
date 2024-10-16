#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the tempreture in celsius:\n");
    scanf("%d",&a);

    int f = (9/5) * (a + 32);
    printf("The temprature in Fahrenheit is %d\n",f);
    return 0;
}