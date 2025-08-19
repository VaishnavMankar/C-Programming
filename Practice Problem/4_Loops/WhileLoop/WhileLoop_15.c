// 15. Read 10 integers from the user and perform multiplication of odd numbers

#include <stdio.h>

int main() {
    int i = 0, num, product = 1;
    while (i < 10) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        if (num % 2 != 0) {
            product *= num;
        }
        i++;
    }
    printf("Product of odd numbers (while loop): %d\n", product);
    return 0;
}
