//  8. Print the Table of Squares and Cubes

#include <stdio.h>

int main() {
    int i, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Number\tSquare\tCube\n");
    for (i = 1; i <= N; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
