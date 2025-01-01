#include<stdio.h>
int main()
{
    int num = 12345;
    int sum = 0;
    int digit;
    // for (int n = num; n != 0; n /= 10) {
    //     digit = n % 10;
    //     sum += digit; 
    // }
    while(num != 0){
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("%d",sum);
    return 0;
}