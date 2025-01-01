#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c;
    double squareroot, root1, root2;
    printf("Enter the three number a, b and c\n");
    scanf("%lf %lf %lf",&a, &b, &c);

    squareroot = (b * b) - (4 * a * c);
    printf("%d\n",squareroot);
    root1 = (-b + sqrt(squareroot)) / (2*a);
    root2 = (-b - sqrt(squareroot)) / (2*a);

    printf("root 1 will be = %lf\n",root1);
    printf("root 2 will be = %lf\n",root2);
    return 0;
}