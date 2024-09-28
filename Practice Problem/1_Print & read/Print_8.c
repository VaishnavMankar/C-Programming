#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double squareroot,root1,root2,realPart,imaginaryPart;

    printf("Enter the three value a,b and c:\n");
    scanf("%lf %lf %lf",&a, &b, &c);

    squareroot = (b * b) - (4 * a * c);

    if(a == 0){
        printf("Coefficient a cannot be 0 for a quadratic equation");
    }
    if(squareroot > 0){
        root1 = (-b + sqrt(squareroot)) / (2*a);
        root1 = (-b - sqrt(squareroot)) / (2*a);
        printf("Roots are real and different\n");
        printf("Root 1 = %lf\n", root1);
        printf("Root 2 = %lf\n", root2);
    }
    else if( squareroot == 0){
        root1 = root2 = -b / (2 *  a);
        printf("Roots are real and mane\n");
        printf("Root 1 = root 2 = %lf\n",root1);
    }
    else{
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-squareroot)/(2*a);
        printf("Roots are complex and different\n");
        printf("Root 1 = %lf + %lfi\n",realPart,imaginaryPart);
        printf("Root 2 = %lf - %lfi\n",realPart,imaginaryPart);
    }
    return 0;

}