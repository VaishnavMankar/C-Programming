#include <stdio.h>
#include <math.h>

double evaluateFunction(double x) {
    double numerator = sqrt(6 * x * x + 0 * x * x * x + (x + 1) * x);
    double result = 10 + (numerator / 2);
    return result;
}

int main() {
    double x;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    double result = evaluateFunction(x);
    printf("f(x) = %lf\n", result);
    return 0;
}
