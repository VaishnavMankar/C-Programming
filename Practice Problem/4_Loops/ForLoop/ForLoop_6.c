// 6. Sumof Digits in a Number

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int temp = num; temp > 0; temp /= 10) {
        sum += temp % 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
