// 5. Calculate the Sum of Odd numbers up to N

#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers up to %d using for loop: %d\n", N, sum);
    return 0;
}
