#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two number a and b = \n");
    scanf("%d %d",&a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %d b = %d\n",a,b);
    return 0;
}