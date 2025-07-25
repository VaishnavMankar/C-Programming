// 7. Print Squares of Numbers from 1 to N

#include <stdio.h>

int main() {
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    do {
        printf("Square of %d is %d\n", i, i * i);
        i++;
    } while (i <= N);

    return 0;
}
