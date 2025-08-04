// 9. Print Multiples of 3 up to N

#include <stdio.h>

int main() {
    int N, i = 3;
    printf("Enter N: ");
    scanf("%d", &N);

    do {
        printf("%d ", i);
        i += 3;
    } while (i <= N);

    return 0;
}
