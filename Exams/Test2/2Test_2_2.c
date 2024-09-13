#include<stdio.h>
int main(){
    int num;
    printf("Enter the element = \n");
    scanf("%d",&num);
    int seen[1000] = {0};
    int original = num;

    while(num != 1 && seen[num] == 0){
        seen[num] = 1;int sum = 0;
        while(num > 0){
            int digit = num%10;
            sum += digit*digit;
            num /= 10;
        }
        num = sum;
    }

    if(num == 1){
        printf("It is a happy number\n");
    }
    else{
        printf("It is not a Happy number\n");
    }
   return 0;
}