#include<stdio.h>
int main()
{
    int N[10];
    for(int i = 0; i < 10; i++){
        scanf("%d",&N[i]);
    }
    int target;
    printf("Enter the element\n");
    scanf("%d",&target);
    int count = 0;
    for(int i = 0; i < 10; i++){
        if(N[i] == target){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}