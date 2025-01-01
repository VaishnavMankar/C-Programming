#include<stdio.h>
int main()
{
    int N[5]= {5,4,3,2,1};
    int min = 0;
    int arr[5];
    for(int i = 0; i < 5; i++){
        if(min > N[i]){
           arr[i] = min;
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}