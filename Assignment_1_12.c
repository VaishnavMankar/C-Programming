#include<stdio.h>
int main()
{
     int a,b,result,n = 10,i;
    //  printf("Enter the number of terms: \n");
    //  scanf("%d",&n);

     a = 0;
     b = 1;
     for(i = 1; i <= n; i++)
     {
        //printf("%d",a);
        result = a + b;
        a = b;
        b = result;
        // printf("%d",a);
     }
     printf("%d",a);
     return 0;
}