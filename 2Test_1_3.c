#include<stdio.h>
int main()
{
    int arr[10] = {0};
    printf("Enter the array of 10 element\n");
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
    }
    printf("The array which you entered was: \n");
    for(int i = 0; i < 10; i++){
        printf("%d\n",arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < 10; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(int i = 1; i < 10; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("Max is %d and min is %d\n",max,min);
    return 0;
}