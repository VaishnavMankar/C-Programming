#include<stdio.h>
int main()
{
    int a;
    printf("Enter the marks\n");
    scanf("%d",&a);
    if(a < 35){
        printf("F");
    }
    else if(a >= 35 && a <= 40){
        printf("pass");
    }
    else if(a > 40 && a <= 55){
        printf("c");
    }
    else if(a > 55 && a <= 65){
        printf("b");
    }
    else if(a > 65 && a <= 85){
        printf("A");
    }
    else{
        printf("O");
    }
    return 0;
}