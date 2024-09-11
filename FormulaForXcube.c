#include<stdio.h>
int main()
{
   int x = 3;
   int y = (x*x*x) + (x*x) + x;
   printf("The answer for x^3 + x^2 + x = %d\n",y);
   return 0;
}
