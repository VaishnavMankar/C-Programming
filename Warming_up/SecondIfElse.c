#include<stdio.h>
int main()
{
    int a;
    printf("Enter your integer: \n");
    scanf("%d", &a);

    if(a < 100){
        printf("%d is a small number", a);
    }else if(a > 100 && a < 1000){
        printf("%d is a big number",a);
    }
    else{
        printf("%d is the largest number",a);
    }
    return 0;
}
