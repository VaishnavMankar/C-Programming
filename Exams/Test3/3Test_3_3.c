#include <stdio.h>
#include <stdbool.h>

bool canPlacePeople(int benchRow[], int size, int n) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (benchRow[i] == 0 && (i == 0 || benchRow[i - 1] == 0) && (i == size - 1 || benchRow[i + 1] == 0)) {
            benchRow[i] = 1; // Place a person
            count++;
            if (count == n) {
                return true;
            }
        }
    }
    return count >= n;
}

int main() {
    int benchRow1[] = {1, 0, 0, 0, 1};
    int n1 = 1;
    int size1 = sizeof(benchRow1) / sizeof(benchRow1[0]);
    printf("Output: %s\n", canPlacePeople(benchRow1, size1, n1) ? "True" : "False");

    int benchRow2[] = {1, 0, 0, 0, 1};
    int n2 = 2;
    int size2 = sizeof(benchRow2) / sizeof(benchRow2[0]);
    printf("Output: %s\n", canPlacePeople(benchRow2, size2, n2) ? "True" : "False");

    return 0;
}
