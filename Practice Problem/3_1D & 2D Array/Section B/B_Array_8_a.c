// 8. WAP to create and read a dynamic NxM 2D array from user and
// a. replace the first column with zeros

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, i, j;

    // Input number of rows and columns
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Dynamically allocate memory for 2D array
    int **arr = (int **)malloc(N * sizeof(int *));
    for (i = 0; i < N; i++) {
        arr[i] = (int *)malloc(M * sizeof(int));
    }

    // Read elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Replace first column with zeros
    for (i = 0; i < N; i++) {
        arr[i][0] = 0;
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
