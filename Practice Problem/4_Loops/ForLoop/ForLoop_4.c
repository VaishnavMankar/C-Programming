// 4. Calculate the Sum of Even numbers up to N

#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers up to %d using for loop is: %d\n", N, sum);
    return 0;
}
