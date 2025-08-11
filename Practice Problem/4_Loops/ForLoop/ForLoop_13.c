// 13. Read five integers from the user and perform their addition, and multiplication user for loop

#include <stdio.h>

int main() {
    int arr[5], sum = 0, product = 1;

    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
