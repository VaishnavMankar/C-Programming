#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);

    while(num >= 10){
        int sum = 0;
        while(num > 0){
            sum += num%10;
            num /= 10;
        }
        num = sum;
    }
    printf("%d",num);
    return 0;
}