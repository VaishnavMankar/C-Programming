//7. WAP to create and read a dynamic NxM 2D array from user and
//a. multiply the first row by 2 and add it to the second row

#include <stdlib.h>

int main() {
    int N, M, i, j;

    // Input number of rows and columns
    printf("Enter number of rows (N): ");
    scanf("%d", &N);
    printf("Enter number of columns (M): ");
    scanf("%d", &M);

    // Create dynamic 2D array
    int **arr = (int **)malloc(N * sizeof(int *));
    for (i = 0; i < N; i++) {
        arr[i] = (int *)malloc(M * sizeof(int));
    }

    // Input array elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Multiply first row by 2 and add to second row
    if (N >= 2) {
        for (j = 0; j < M; j++) {
            arr[1][j] = arr[1][j] + 2 * arr[0][j];
        }
    }

    // Print the updated matrix
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
