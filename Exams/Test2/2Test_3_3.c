#include <stdio.h>

void findMaxOnesRow(int mat[][4], int rows, int cols) {
    int maxCount = 0, rowIndex = -1;

    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 1) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            rowIndex = i;
        }
    }

    printf("Row index with max ones: %d, Count: %d\n", rowIndex, maxCount);
}

int main() {
    int mat[2][4] = {{0, 0, 0, 0}, {0, 1, 1, 1}};
    findMaxOnesRow(mat, 2, 4);
    return 0;
}
