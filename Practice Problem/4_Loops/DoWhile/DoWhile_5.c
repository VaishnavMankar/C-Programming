//5. Calculate the Sum of Odd numbers up to N

#include <stdio.h>

int main() {
    int N, i = 1, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    // Do-while loop to sum odd numbers up to N
    do {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    } while (i <= N);

    printf("Sum of odd numbers up to %d is: %d\n", N, sum);

    return 0;
}
