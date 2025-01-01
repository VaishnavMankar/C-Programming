#include<stdio.h>
int main()
{
    int N[5];
    printf("Enter 5 elements\n");
    for(int i = 0;i < 5; i++){
        scanf("%d",&N[i]);
    }
    printf("element you entered are: \n");
    for(int i = 4; i >= 0;i--){
        printf("%d\n",N[i]);
    }
}