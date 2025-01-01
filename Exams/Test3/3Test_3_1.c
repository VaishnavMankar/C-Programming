#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);

    int** matrix1 = (int**)malloc(n * sizeof(int*));
    int** matrix2 = (int**)malloc(n * sizeof(int*));
    int** result = (int**)malloc(n * sizeof(int*));
}