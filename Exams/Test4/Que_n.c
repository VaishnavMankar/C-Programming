#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter the two number a and b:\n");
    scanf("%d %d",&a ,&b);
    if(a > b){
        printf("The first value is geatest %d",a);
    }
    else if(a < b){
        printf("The second value is the greatest %d",b);
    }
    else {
        printf("Bothe the value are equal %d = %d",a,b);
    }
}
