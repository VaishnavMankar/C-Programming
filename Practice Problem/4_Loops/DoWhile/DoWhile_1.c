// Write a program to,
//1. Count Down from N to 1

#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int i = N;
    if (N >= 1) {
        do {
            printf("%d\n", i);
            i--;
        } while (i >= 1);
    }

    return 0;
}
