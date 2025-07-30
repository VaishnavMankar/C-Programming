// 10. Calculate the Sum of Squares of First N Natural Numbers

#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i * i;
    }

    printf("Sum of squares = %d\n", sum);
    return 0;
}
