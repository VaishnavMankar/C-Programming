//2. Print Even numbers from 1 to N
#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
