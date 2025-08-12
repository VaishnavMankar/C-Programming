// 13. Read five integers from the user and perform their addition, and multiplication user for loop

#include <stdio.h>

int main() {
    int arr[5], i = 0, sum = 0, product = 1;

    while (i < 5) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
        i++;
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
