#include<stdio.h>
int main()
{
    int marks[4];
    for(int i=0;i < 4;i++){
        printf("Enter the value of %d element of an array\n",i);
        scanf("%d",&marks[i]);
    }
    for(int i = 0; i < 4; i++){
        printf("for");
    }
    return 0;

}