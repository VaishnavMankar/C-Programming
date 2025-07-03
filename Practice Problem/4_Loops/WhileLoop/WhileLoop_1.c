// Write a program to,
// 1. Count Down from N to 1
#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = N;
    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    return 0;
}
