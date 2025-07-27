//  8. Print the Table of Squares and Cubes

#include <stdio.h>

int main() {
    int i = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Number\tSquare\tCube\n");
    while (i <= N) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
        i++;
    }

    return 0;
}
