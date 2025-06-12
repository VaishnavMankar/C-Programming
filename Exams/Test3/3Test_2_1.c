#include <stdbool.h>
#include <stdio.h>

bool containsDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    if (containsDuplicate(nums, numsSize)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
