#include <stdio.h>

void flipAndInvertImage(int image[][3], int n) {
    for (int i = 0; i < n; i++) {
        // flip horizontally
        for (int j = 0; j < n / 2; j++) {
            int temp = image[i][j];
            image[i][j] = image[i][n - j - 1];
            image[i][n - j - 1] = temp;
        }
        // invert the image
        for (int j = 0; j < n; j++) {
            image[i][j] = image[i][j] == 0 ? 1 : 0;
        }
    }
}

void printImage(int image[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int image[3][3] = {{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    int n = 3;

    printf("Original Image:\n");
    printImage(image, n);

    flipAndInvertImage(image, n);

    printf("Processed Image:\n");
    printImage(image, n);

    return 0;
}
