//4. WAP to create and read a dynamic NxM 2D array from user and
//a. accept a column number from the user and print all elements from this column

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, col;

    // read dimensions
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // allocate memory for the 2D array
    int **arr = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        arr[i] = (int *)malloc(M * sizeof(int));
    }

    // read values for the array
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // get the column to print
    printf("Enter column number to print (0-based index): ");
    scanf("%d", &col);

    // check for valid column index
    if (col < 0 || col >= M) {
        printf("Invalid column index!\n");
    } else {
        printf("Elements of column %d:\n", col);
        for (int i = 0; i < N; i++) {
            printf("%d\n", arr[i][col]);
        }
    }

    // free allocated memory
    for (int i = 0; i < N; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
