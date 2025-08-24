// 17. Read 10 integers and print them along with the size of the array

#include <stdio.h>

int main() {
    int arr[10], i;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    printf("Size of the array: %lu bytes\n", sizeof(arr));
    return 0;
}
