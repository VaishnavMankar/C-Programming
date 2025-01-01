#include<stdio.h>
int main()
{
    int a= 3;
    int N;
    printf("Enter the number for which you want the table");
    scanf("%d",&N);
    for(int i = a; i <= N ; i += 3){
        printf("%d\n", i);
    }
    return 0;
}