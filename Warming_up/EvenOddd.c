#include<stdio.h>
int main()
{
    int i;
    printf("Enter your number= ");
    scanf("%d",&i);
    if(i % 2 == 0){
        printf("The number %d is a even number", i);
    }
    else{
        printf("The number %d is an odd number",i);
    }
    return 0;
}