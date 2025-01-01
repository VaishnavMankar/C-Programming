//8. Print the Table of Squares and Cubes
#include<stdio.h>
int main()
{
    printf("Table of Squares and Cubes");
    for(int i = 1; i < 10; i++){
        printf("%d = %d and %d\n",i,i*i,i*i*i);
    } 
    return 0;
}