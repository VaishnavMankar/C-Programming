#include<stdio.h>
int main()
{
    int N[10];
    int sum = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d",&N[i]);
    }
    for(int i = 0; i < 10; i++){
        sum += N[i];
    }
    printf(" sum = %d\n",sum);
    int average = sum/10;
    printf("The average of all the element is %d\n",average);

    return 0;
}