#include<stdio.h>
#include<stdbool.h>

bool isPresent(int nums[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int nums[4] = {1,2,3,4};
    int size = 4;
    if (isPresent(nums,size)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}