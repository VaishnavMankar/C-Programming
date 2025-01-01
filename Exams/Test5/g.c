#include<stdio.h>
int main()
{
    int N[10];
    printf("Enter the element: \n");
    for(int i =0; i < 10; i++){
        scanf("%d",&N[i]);
    }
    int max = 0;
    for(int i = 0; i < 10; i++){
        if (N[i] > max){
            max = N[i];
        }
    }
    printf("The max value is %d\n",max);
    int min = 0;
    for(int i = 0; i < 10; i++){
        if (N[i] < min){
            max = N[i];
        }
    }
    printf("The min value is %d\n",min);
    return 0;
}