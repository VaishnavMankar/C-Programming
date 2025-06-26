//10. WAP to create and read a dynamic NxM matrix called A from user and
//a. copy the content of A to a new matrix B. Print B

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    // Get matrix dimensions from user
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Allocate memory for matrix A
    int **A = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(M * sizeof(int));
    }

    // Input matrix A elements
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Allocate memory for matrix B
    int **B = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        B[i] = (int *)malloc(M * sizeof(int));
    }

    // Copy elements from A to B
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            B[i][j] = A[i][j];
        }
    }

    // Print matrix B
    printf("Matrix B (copy of A):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
    }
    free(A);
    free(B);

    return 0;
}
