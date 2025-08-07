#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Sum of odd digits = 0\n");
        return 0;
    }

    do {
        digit = num % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        num /= 10;
    } while (num > 0);

    printf("Sum of odd digits = %d\n", sum);
    return 0;
}
