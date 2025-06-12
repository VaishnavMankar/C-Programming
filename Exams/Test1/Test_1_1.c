#include <stdio.h>

int main() {
    float real, imag;

    printf("Enter the real part: ");
    scanf("%f", &real);

    printf("Enter the imaginary part: ");
    scanf("%f", &imag);

    if (imag >= 0)
        printf("The complex number is: %.2f + %.2fi\n", real, imag);
    else
        printf("The complex number is: %.2f - %.2fi\n", real, -imag);

    return 0;
}
