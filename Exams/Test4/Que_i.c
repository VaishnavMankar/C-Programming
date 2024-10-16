#include<stdio.h>
int main()
{
    int red;
    printf("Enter the radious of the circle: \n");
    scanf("%d",&red);
    float area = 3.14 * (red * red);
    printf("the area if the cirle is %f",area);
    return 0;
}