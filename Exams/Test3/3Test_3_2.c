#include <stdio.h>
#include <stdbool.h>

bool isToeplitzMatrix(int matrix[][4], int m, int n) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (matrix[i][j] != matrix[i + 1][j + 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 5, 1, 2}
    };
    int m = 3, n = 4;

    if (isToeplitzMatrix(matrix, m, n)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
