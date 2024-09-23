#include<stdio.h>
int main()
{
    int a = 4;
    int b = 7;
    int  temp;
    printf("a = %d and b = %d\n",a,b);
    printf("\n");
    temp = a;
    a = b;
    b = temp;
    printf("a = %d and b = %d\n",a,b);
    return 0;
}