//10. WAP to create and read a dynamic NxM matrix called A from user and
//c. create a fourth matrix D such that D_ij = A_ij+B_ij+C_ij. Print D

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    // Get matrix dimensions
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Allocate memory for matrices A, B, C, D
    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **C = (int **)malloc(N * sizeof(int *));
    int **D = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        A[i] = (int *)malloc(M * sizeof(int));
        B[i] = (int *)malloc(M * sizeof(int));
        C[i] = (int *)malloc(M * sizeof(int));
        D[i] = (int *)malloc(M * sizeof(int));
    }

    // Read matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Compute B = A, C = B * B