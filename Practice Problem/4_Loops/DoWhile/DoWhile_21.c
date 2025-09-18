// 21. Calculate the power of a number (i.e. x^y) using for loop

#include <stdio.h>

int main() {
    int x, y, i = 1;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    if (y == 0) {
        result = 1;
    } else {
        do {
            result *= x;
            i++;
        } while (i <= y);
    }

    printf("%d^%d = %lld\n", x, y, result);
    return 0;
}
