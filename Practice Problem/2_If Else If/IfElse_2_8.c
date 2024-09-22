#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);

    if(n >= 100 && n <= 200){
        printf("Small number\n");
    }
    else if(n >= 201 &&  n <= 300){
        printf("Big number\n");
    }
    else if(n >=  301 && n <= 400){
        printf("Large number\n");
    }
    else if(n >= 401){
        printf("Veary large number\n");
    }
    return 0;
}