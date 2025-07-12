// 4. Calculate the Sum of Even numbers up to N

#include <stdio.h>

int main() {
    int N, sum = 0, i = 2;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N >= 2) {
        do {
            sum += i;
            i += 2;
        } while (i <= N);
    }

    printf("Sum of even numbers up to %d using do-while loop is: %d\n", N, sum);
    return 0;
}
