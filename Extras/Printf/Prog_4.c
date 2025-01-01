#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number a and b: \n");
    scanf("%d %d",&a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d x %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("Complete it successfuealy");
    
    return 0;
}