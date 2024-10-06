// Read a 3x3 matrix from the user and print the addition of each row and each column
#include<stdio.h>
int main()
{
    int arr[3][3];
    int sumOfRow;
    int sumOfColumn;
    printf("Enter the 3 by 3 matrix\n");
    for(int r = 0; r < 3; r++){
        for(int c = 0;c < 3; c++){
            scanf("%d",&arr[r][c]);
        }
    }
    for(int r = 0; r < 3; r++){
        sumOfRow = 0;
        for(int c = 0; c < 3; c++){
            sumOfRow += arr[r][c];
        }
        printf("The sum of %d row is %d\n",r+1,sumOfRow);
    }
    
    for(int c = 0; c < 3; c++){
        sumOfColumn = 0;
        for(int r = 0; r < 3; r++){
            sumOfColumn += arr[r][c];
        }
        printf("The sum of %d column is %d\n",c+1,sumOfColumn);
    }
    return 0;
}