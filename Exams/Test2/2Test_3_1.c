#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count = 0;
    for (int i = 0; i < flowerbedSize; i++) {
        if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
            flowerbed[i] = 1;
            count++;
        }
        if (count >= n) {
            return true;
        }
    }
    return count >= n;
}

int main() {
    int flowerbed1[] = {1, 0, 0, 0, 1};
    int n1 = 1;
    int flowerbedSize1 = sizeof(flowerbed1) / sizeof(flowerbed1[0]);
    printf("Output: %s\n", canPlaceFlowers(flowerbed1, flowerbedSize1, n1) ? "True" : "False");

    int flowerbed2[] = {1, 0, 0, 0, 1};
    int n2 = 2;
    int flowerbedSize2 = sizeof(flowerbed2) / sizeof(flowerbed2[0]);
    printf("Output: %s\n", canPlaceFlowers(flowerbed2, flowerbedSize2, n2) ? "True" : "False");

    return 0;
}
