#include<stdio.h>
int main()
{
    int a;
    printf("Enterr your score =\n");
    scanf("%d",&a);
    if(a >= 90){
        printf("A\n");
    }
    else if(a >= 80 && a <= 89){
        printf("B\n");
    }
    else if(a >= 70 && a <= 79){
        printf("c\n");
    }
    else if(a >= 60 && a <= 69){
        printf("D\n");
    }
    else{
        printf("Pass\n");
    }
    return 0;
}