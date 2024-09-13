#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    int seen[1000] = {0};
    int originalNum = num;

    while(num != 1 && seen[num] == 0){
        seen[num] = 1;
        int sum = 0;
        while(num > 0){
        int digit = num % 10;
        sum += digit*digit;
        num /= 10;
       }
       num = sum;
    }
    //printf("%d",num);

     if (num == 1) {
        printf("%d is a Happy Number\n", originalNum);
    } else {
        printf("%d is Not a Happy Number\n", originalNum);
    }

    return 0;
}