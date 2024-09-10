#include<stdio.h>
int main()
{
    int rows,column,temp;
    printf("Enter the roes and column you want in the matrix");
    scanf("%d %d",&rows,&column);
    int matrix1[rows][column];
    int matrix2[rows][column];
    int matrix3[rows][column];
    
    printf("enter the element off first matrix\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("first matrix is\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
     printf("enter the element off second matrix\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
     printf("Second matrix is");
     for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

      for(int i = 0; i <  3; i++){
        for(int j = 0; j < 3; j++){
            temp = 0;
            for(int k = 0; k < 3; k++){
                temp += matrix1[i][k] * matrix2[k][j];
            }
            matrix3[i][j] = temp; 
        }
      }
      printf("Matrix multiplication\n");
      
      for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;

}