// 6. Sumof Digits in a Number

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
