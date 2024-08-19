#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer a= \n");
    scanf("%d",&a);
    if (a > 10){
        printf("%d is a greater number\n",a);
    }
    else{
        printf("%d is a small number\n",a);
    }
    return 0;
}