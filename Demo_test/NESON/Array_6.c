#include<stdio.h>
int main()
{
    int a[9] = {3,5,7,9,13,16,18,19,20};
    for(int i = 0; i< 9; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i = 8; i>= 0; i--){
        printf("%d ",a[i]);
    }
    return 0;
}