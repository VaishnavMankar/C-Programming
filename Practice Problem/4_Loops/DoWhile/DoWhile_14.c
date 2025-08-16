// 14. Read 10 integers from the user and perform the addition of even numbers

#include <stdio.h>

int main() {
    int arr[10], i = 0, sum = 0;

    do {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
        i++;
    } while (i < 10);

    printf("Sum of even numbers = %d\n", sum);
    return 0;
}
