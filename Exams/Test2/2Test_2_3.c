#include <stdio.h>

int maximumWealth(int accounts[][3], int customers, int banks) {
    int maxWealth = 0;

    for (int i = 0; i < customers; i++) {
        int currentWealth = 0;
        for (int j = 0; j < banks; j++) {
            currentWealth += accounts[i][j];
        }
        if (currentWealth > maxWealth) {
            maxWealth = currentWealth;
        }
    }

    return maxWealth;
}

int main() {
    int accounts1[2][3] = {{1, 2, 3}, {3, 2, 1}};
    int accounts2[3][3] = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};

    printf("Richest customer's wealth (Example 1): %d\n", maximumWealth(accounts1, 2, 3)); // Output: 6
    printf("Richest customer's wealth (Example 2): %d\n", maximumWealth(accounts2, 3, 3)); // Output: 17

    return 0;
}
