#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    // Swap the values without using a third variable
    a = a + b; // a now becomes 15
    b = a - b; // b now becomes 5
    a = a - b; // a now becomes 10

    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
