// Read a 2x2 matrix from the user and print it
#include<stdio.h>
int main()
{
    int arr[2][2];
    printf("Enter the 2 by 2 matrix\n");
    for(int r = 0; r < 2; r++){
        for(int c = 0;c < 2; c++){
            scanf("%d",&arr[r][c]);
        }
    }
    printf("The matrix you matrix:\n");
    for(int r = 0; r < 2; r++){
        for(int c = 0;c < 2; c++){
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}