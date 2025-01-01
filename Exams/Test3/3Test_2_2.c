#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nums[] = {1,3,5,6};
    int target = 5;
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    int left = 0;
    int right = numsSize - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(nums[mid] == target){
            printf("%d",mid);
            return 0;
        }
        else if(nums[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    printf("%d",left);
    return 0;
}
// #include <stdio.h>

// int searchInsert(int* nums, int numsSize, int target) {
//     int left = 0;
//     int right = numsSize - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (nums[mid] == target) {
//             return mid;
//         } else if (nums[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return left;
// }

// int main() {
//     int nums[] = {1, 3, 5, 6};
//     int target = 5;
//     int numsSize = sizeof(nums) / sizeof(nums[0]);

//     int index = searchInsert(nums, numsSize, target);
//     printf("The index of target %d is: %d\n", target, index);

//     target = 2;
//     index = searchInsert(nums, numsSize, target);
//     printf("The index where target %d can be inserted is: %d\n", target, index);

//     return 0;
// }
