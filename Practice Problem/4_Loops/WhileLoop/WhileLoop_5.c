// 5. Calculate the Sum of Odd numbers up to N

#include <stdio.h>

int main() {
    int N, sum = 0, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (i <= N) {
        sum += i;
        i += 2;
    }

    printf("Sum of odd numbers up to %d using while loop: %d\n", N, sum);
    return 0;
}
