#include<stdio.h>
int main()
{
    int a = 2;
    int b = 5;
    int temp;
    
    //swaping 
    temp = a;
    a = b;
    b = temp;
    printf("%d %d",a,b);
}