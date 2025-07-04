//2. Print Even numbers from 1 to N

#include <stdio.h>

int main() {
    int N, i = 2;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    do {
        if (i > N) break;
        printf("%d ", i);
        i += 2;
    } while (1);

    return 0;
}
