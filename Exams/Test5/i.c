#include <stdio.h>

int main() {
    int N[10];
    int count = 0;
    int negative = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &N[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (N[i] >= 0) {
            count++;
        } else {
            negative++;
        }
    }
    printf("positive: %d\n", count);
    printf("negative: %d\n", negative);

    return 0;
}