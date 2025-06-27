//10. WAP to create and read a dynamic NxM matrix called A from user and
//b. create a third matrix C such that C_ij = B_ij * B_ij. Print C

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    // Get matrix dimensions
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Allocate memory for matrices A, B, and C
    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **C = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(M * sizeof(int));
        B[i] = (int *)malloc(M * sizeof(int));
        C[i] = (int *)malloc(M * sizeof(int));
    }

    // Read matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Copy A to B and compute C = B * B (element-wise)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            B[i][j] = A[i][j];
            C[i][j] = B[i][j] * B[i][j];
        }
    }

    // Print matrix C
    printf("Matrix C (each element squared from B):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
