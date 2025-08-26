// 17. Read 10 integers and print them along with the size of the array

#include <stdio.h>

int main() {
    int arr[10], i = 0;
    printf("Enter 10 integers:\n");
    do {
        scanf("%d", &arr[i]);
        i++;
    } while (i < 10);

    i = 0;
    printf("You entered:\n");
    do {
        printf("Element %d: %d\n", i + 1, arr[i]);
        i++;
    } while (i < 10);

    printf("Size of the array: %lu bytes\n", sizeof(arr));
    return 0;
}
