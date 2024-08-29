#include<stdio.h>
int main()
{
    int num,value;
    printf("Enter the number = \n");
    scanf("%d",&num);
    if(num == 10){
        value = num/2;
    }
    else if(num == 20){
        value = num/3;
    }
    else if(num == 30){
        value = num/4;
    }
    else if(num == 50){
        value = num/5;
    }
    printf("%d\n",value);
    return 0;
}