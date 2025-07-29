// 9. Print Multiples of 3 up to N
#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    for (int i = 3; i <= N; i += 3) {
        printf("%d ", i);
    }

    return 0;
}
