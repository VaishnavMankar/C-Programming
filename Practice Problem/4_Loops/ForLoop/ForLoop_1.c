// Write a program to,
// 1. Count Down from N to 1

#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}
