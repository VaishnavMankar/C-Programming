#include<stdio.h>
int main(){
    int x, ans,ans2;
    printf("Enter a integer = \n");
    scanf("%d",&x);
    ans = (x*x*x)+2*(x*x)+(3*x)*(x+1);
    ans2 = ans/x;
    printf("%d",ans2);
    return 0;
}