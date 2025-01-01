#include<stdio.h>
int main()
{
    int N;
    printf("Enter the side of the array you want: ");
    scanf("%d",&N);
    int arr[N];
    for(int i =0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < N; i++){
        printf("%d\n",arr[i]);
    }
    int max = 0;
    for(int i = 0; i < N; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("The max value is %d\n",max);

}