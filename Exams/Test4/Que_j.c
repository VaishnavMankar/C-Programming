#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter the value of a and b in equation ax + b = 0\n");
    scanf("%d %d",&a, &b);
    x = -(b/a);
    printf("%dx + %d = %d",a,b,x);
}