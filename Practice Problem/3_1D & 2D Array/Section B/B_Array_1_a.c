// 1. WAP to read the dimension M, N of a 2D array
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows (m) : ");
    scanf("%d",&m);
    printf("Enter the number of column (n) : ");
    scanf("%d",&n);
    
    int arr[m][n];
    printf("The dimension of the array are rows = %d & column = %d",m,n);
    return 0;
}