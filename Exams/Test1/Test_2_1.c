#include<stdio.h>
int main()
{
   float a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,avg;
   printf("Enter 10 integers = \n");
   scanf("%f %f %f %f %f %f %f %f %f %f", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);

   avg = (a1+a2+a3+a4+a5+a6+a7+a8+a9+a10)/10;
   if(avg > 50){
    avg == avg/2;
    printf("%f\n",avg);
   }else{
    printf("%f\n",avg);
   }
    return 0;
}
