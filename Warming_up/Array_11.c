#include<stdio.h>
int main()
{
    int arr[10] = {9,6,7,4,5,3,1,2,10,8};
    int max = arr[0];
    for(int i = 1; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}