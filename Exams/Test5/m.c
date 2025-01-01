#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int temp = arr[n - 1];
    int i = n - 1;
    do {
        arr[i] = arr[i - 1];
        i--;
    } while (i > 0);

    arr[0] = temp;
    printf("array after right rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
