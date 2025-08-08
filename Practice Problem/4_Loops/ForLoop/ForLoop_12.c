//  12. Read five integers from the user into an integer array using for loop

#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
