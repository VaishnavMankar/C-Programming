//  11. Find the Sum of Odd Digits in a Number
#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num > 0; num /= 10) {
        digit = num % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
    }

    printf("Sum of odd digits = %d\n", sum);
    return 0;
}
