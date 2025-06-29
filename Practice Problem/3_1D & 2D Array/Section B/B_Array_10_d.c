//10. WAP to create and read a dynamic NxM matrix called A from user and
//d. create a fifth matrix E such that E_ij = 2A_ij + 3D_ij. Print E

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    // Read matrix dimensions
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Allocate memory for matrices A, B, C, D, E
    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **C = (int **)malloc(N * sizeof(int *));
    int **D = (int **)malloc(N * sizeof(int *));
    int **E = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(M * sizeof(int));
        B[i] = (int *)malloc(M * sizeof(int));
        C[i] = (int *)malloc(M * sizeof(int));
        D[i] = (int *)malloc(M * sizeof(int));
        E[i] = (int *)malloc(M * sizeof(int));
    }

    // Read matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Compute B = A, C = B * B, D = A + B + C, E = 2A + 3D
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            B[i][j] = A[i][j];
            C[i][j] = B[i][j] * B[i][j];
            D[i][j] = A[i][j] + B[i][j] + C[i][j];
            E[i][j] = 2 * A[i][j] + 3 * D[i][j];
        }
    }

    // Print matrix E
    printf("Matrix E (2*A + 3*D):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", E[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
        free(D[i]);
        free(E[i]);
    }
    free(A);
    free(B);
    free(C);
    free(D);
    free(E);

    return 0;
}
