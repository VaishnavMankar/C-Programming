//4. Calculate the Sum of Even numbers up to N
#include<stdio.h>
int main()
{
    int N = 20;
    int sum = 0;
    for(int i = 0; i <= 10; i++){
        if(i %  2 == 0){
            sum += i;
        }
    }
    printf("%d",sum);
    return 0;
}