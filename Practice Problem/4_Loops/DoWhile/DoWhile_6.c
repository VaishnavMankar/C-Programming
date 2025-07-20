// 6. Sumof Digits in a Number

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    if (temp == 0) {
        sum = 0;
    } else {
        do {
            sum += temp % 10;
            temp /= 10;
        } while (temp > 0);
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
