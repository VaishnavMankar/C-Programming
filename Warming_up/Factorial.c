#include<stdio.h>
int main()
{
    int n = 0;
    printf("Enter the size of n : ");
    scanf("%d",&n);

    int fact = 1;

    for(int i = n; i >= 2;i--)
    {
        fact = fact*i;
    }
    printf("%d\n",fact);
    return 0;
}