// 9. WAP to create and read a dynamic NxM 2D array from user and 
// b. swap the first row with the last row

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    // Input dimensions
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Allocate memory for 2D array
    int **arr = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        arr[i] = (int *)malloc(M * sizeof(int));
    }

    // Input elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Swap first and last rows
    if (N > 1) {
        for (int j = 0; j < M; j++) {
            int temp = arr[0][j];
            arr[0][j] = arr[N - 1][j];
            arr[N - 1][j] = temp;
        }
    } else {
        printf("Matrix has only one row; swap not needed.\n");
    }

    // Print the modified matrix
    printf("Modified matrix after swapping first and last rows:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < N; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
