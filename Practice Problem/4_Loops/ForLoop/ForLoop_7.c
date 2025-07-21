// 7. Print Squares of Numbers from 1 to N
#include <stdio.h>

int main() {
    int i, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Square of %d is %d\n", i, i * i);
    }

    return 0;
}
