//column addition
#include<stdio.h>
int main()
{
    int a [5][5] ={
        {8,3,9,0,10},
        {3,5,17,1,1},
        {2,8,6,23,1},
        {15,7,3,2,9},
        {6,14,2,6,0}
    };
    int i,j;
    int sum = 0;
    printf("Column total: \n");
      // row addition in an matrix
    for(j = 0; j < 5 ; j++){
        for(i = 0; i < 5; i++){
            sum += a[i][j];
        }
        printf("%d \n",sum);
        sum = 0;
    } 
    return 0; 
}