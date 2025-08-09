//  12. Read five integers from the user into an integer array using for loop

#include <stdio.h>

int main() {
    int arr[5], i = 0;
    while (i < 5) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }

    printf("You entered: ");
    i = 0;
    while (i < 5) {
        printf("%d ", arr[i]);
        i++;
    }
    return 0;
}
