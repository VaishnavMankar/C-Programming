// 10. Calculate the Sum of Squares of First N Natural Numbers

#include <stdio.h>

int main() {
    int N, sum = 0, i = 1;
    printf("Enter N: ");
    scanf("%d", &N);

    while (i <= N) {
        sum += i * i;
        i++;
    }

    printf("Sum of squares = %d\n", sum);
    return 0;
}
