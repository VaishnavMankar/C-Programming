#include<stdio.h>
int main()
{
    int a = 4;
    int b = 9;
    printf("a = %d and b = %d\n",a,b);
    printf("\n");

    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("a = %d and b = %d\n",a,b);
    return 0;
}