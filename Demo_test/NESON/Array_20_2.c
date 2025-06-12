#include<stdio.h>
int main()
{
    int i = 1;
    int *p = &i;
    int q = p;
    int *q = 5;
    printf("%d",*p);
    return 0;
}