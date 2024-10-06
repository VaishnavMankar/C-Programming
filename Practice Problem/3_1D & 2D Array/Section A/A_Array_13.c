//Read a 2x2 matrix from the user and print the addition of each row
#include<stdio.h>
int main()
{
    int arr[2][2];
    int sunOfRow;
    printf("Enter the 2 by 2 matrix\n");
    for(int r = 0; r < 2; r++){
        for(int c = 0;c < 2; c++){
            scanf("%d",&arr[r][c]);
        }
    }
    for(int r = 0; r < 2; r++){
        sunOfRow = 0;
        for(int c = 0; c < 2; c++){
            sunOfRow += arr[r][c];
        }
        printf("The sum of %d is %d\n",r+1,sunOfRow);
    }
    return 0;
}