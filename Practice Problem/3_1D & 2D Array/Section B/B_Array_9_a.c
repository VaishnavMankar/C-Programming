//9. WAP to create and read a dynamic NxM 2D array from user and
//a. swap the first column with the last column

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    // Get the dimensions
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Dynamically allocate memory for the 2D array
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

    // Swap first and last columns
    if (M > 1) {
        for (int i = 0; i < N; i++) {
            int temp = arr[i][0];
            arr[i][0] = arr[i][M - 1];
            arr[i][M - 1] = temp;
        }
    } else {
        printf("Matrix has only one column; swap not needed.\n");
    }

    // Print the modified matrix
    printf("Modified matrix after swapping first and last columns:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free the memory
    for (int i = 0; i < N; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
