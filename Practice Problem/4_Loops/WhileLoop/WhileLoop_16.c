// 16. Read 10 integers from the user and perform addition of all even numbers and multiplication of all odd numbers

#include <stdio.h>

int main() {
    int i = 0, num, sum_even = 0, product_odd = 1;
    while (i < 10) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 == 0)
            sum_even += num;
        else
            product_odd *= num;
        i++;
    }
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Product of odd numbers: %d\n", product_odd);
    return 0;
}
