// 2. Print Even numbers from 1 to N

#include <stdio.h>

int main() {
    int N, i = 2;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}
