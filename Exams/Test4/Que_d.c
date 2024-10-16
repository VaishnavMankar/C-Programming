#include<stdio.h>
int main()
{
    float a,b;
    double c,d;
    printf("Enter any two integer a and b:\n");
    scanf("%f %f",&a, &b);
    if(a == b){
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }
    printf("Enter any two integer c and d:\n");
    scanf("%lu %lu",&c, &d);
    if(c == d){
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }
    return 0;
}