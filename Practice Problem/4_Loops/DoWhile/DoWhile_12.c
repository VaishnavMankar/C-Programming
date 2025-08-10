//  12. Read five integers from the user into an integer array using for loop

#include <stdio.h>

int main() {
    int arr[5], i = 0;
    do {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    } while (i < 5);

    printf("You entered: ");
    i = 0;
    do {
        printf("%d ", arr[i]);
        i++;
    } while (i < 5);
    return 0;
}
