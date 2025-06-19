// 6. WAP to create and read a dynamic NxM 2D array from user and
// a. multiply the first row by 2 and add it to the second row

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, N, M;

    // Input number of rows and columns
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Allocate memory for 2D array
    int **arr = (int **)malloc(N * sizeof(int *));
    for (i = 0; i < N; i++) {
        arr[i] = (int *)malloc(M * sizeof(int));
    }

    // Input array elements
    printf("Enter elements of the %d x %d matrix:\n", N, M);
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Multiply first row by 2 and add to second row
    if (N >= 2) {
        for (j = 0; j < M; j++) {
            arr[1][j] += 2 * arr[0][j];
        }
    }

    // Print updated matrix
    printf("Updated matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (i = 0; i < N; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
