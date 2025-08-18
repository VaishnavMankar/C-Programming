// 15. Read 10 integers from the user and perform multiplication of odd numbers

#include <stdio.h>

int main() {
    int i, num, product = 1;
    for (i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 != 0) {
            product *= num;
        }
    }
    printf("Product of odd numbers (for loop): %d\n", product);
    return 0;
}
