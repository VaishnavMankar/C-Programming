#include<stdio.h>
int main()
{
    int base,hight;
    float area;
    printf("Enter the base and hight of the trangle");
    scanf("%d %d",&base, &hight);
    area = 1/2 * (base*hight);
    printf("Area of the triangle is %f",area);
    return 0;
}