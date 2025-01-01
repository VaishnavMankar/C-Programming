//5. Calculate the Sum of Odd numbers up to N
#include<stdio.h>
int main()
{
    int N = 10;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            sum += i; 
        }
    }
    printf("%d",sum);
    return 0;
}