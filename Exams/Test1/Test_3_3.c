#include<stdio.h>
int main()
{
    int count = 0;
    int original,num,digit;
    printf("Enter the number: \n");
    scanf("%d",&original);

    num = original;

    if(num == 0){
        count = 1;
    }
    else{
    while(num > 0){
        num /= 10;
        count++;
      }
    }
    printf(" Numberr of digits: %d\n",count);

    while(num > 0){
        digit = num%10;
        if(digit != 0 && digit % count == 0){
            printf("%d",count);
        }
        else{
            printf("Not divideable");
        }
        num /= 10;
    }
    return 0;
}