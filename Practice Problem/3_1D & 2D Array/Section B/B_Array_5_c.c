//5. WAP to create and read a dynamic NxM 2D array from user and
//c. multiply the matrix by 5

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

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

    // multiply each element of the matrix by 5
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] *= 5;
        }
    }

    // print the modified matrix
    printf("Modified matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // free allocated memory
    for (int i = 0; i < N; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
