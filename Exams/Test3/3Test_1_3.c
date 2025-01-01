#include<stdio.h>
int main()
{   
    int nums[] = {2,2,3,3,6,6,1};
    int result = 0;
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0; i < numsSize; i++){
        result ^= nums[i];
    }
    printf("%d",result);
    return 0;
}