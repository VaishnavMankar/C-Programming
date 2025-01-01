#include<stdio.h>
int main()
{
    int arr1[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr2[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr3[3][3];
        // for(int i = 0; i < 3; i++){
        // for(int j = 0;j < 3; j++){
        // printf("%d",arr1[j][j]);
        // }
        // }
    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 3; j++){
            int temp = 0;
            for(int k = 0;k < 3; k++){
                temp = arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = temp;
        }
        
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 3; j++){
        printf("%d ",arr3[j][j]);
        }
        printf("\n");
    }
    return 0;
}