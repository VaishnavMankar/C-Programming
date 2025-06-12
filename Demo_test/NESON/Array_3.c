#include<stdio.h>
#define N 5
int main()
{
    int arr[N];
    printf("Enter the numbers =\n");
    for(int i = 0; i < N; i++){
        
        scanf("%d\n",&arr[i]);
    }
    printf("Array element are as followed\n");
    for(int i = 0; i < N; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}