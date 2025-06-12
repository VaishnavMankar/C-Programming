#include<stdio.h>
int main()
{
    int a[] = {1,3,5,7,9,13,15,16,18,9,23,25,336,36,57,89,56,14,74,32,70};
    int b[] = {1,2,3,4,5};
    printf("b = %d\n",sizeof(b)/sizeof(b[0]));
    printf("a = %d\n",sizeof(a)/sizeof(a[0]));

}