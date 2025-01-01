//11.Find the Sum of Odd Digits in a Number
#include<stdio.h>
int main()
{
    int number;
    int sum = 0;
    printf("Enter the number: \n");
    scanf("%d",&number);

    while(number != 0){
        int digit = number%10;
        if(digit % 2 != 0){
            sum += digit;
        }
        number/= 10;
    }
    printf("%d",sum);
    return 0;
}