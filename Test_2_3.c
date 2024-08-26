#include<stdio.h>
int main()
{
      int a ,b,ans;
      printf("Enterr a number and its power = \n");
      scanf("%d %d",&a,&b);

      for (int i = a; i <= b; i++){
            ans = a * a;
            printf("%d",ans);
      }
      return 0;
      
}