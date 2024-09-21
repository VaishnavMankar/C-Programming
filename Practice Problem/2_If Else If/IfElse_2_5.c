#include<stdio.h>
int main()
{
    int a , b;
    int Quotient,Remainder ;
    printf("Enter two integer a & b =  \n");
    scanf("%d %d",&a , &b);

    if(b != 0){
        Quotient = a / b;
        Remainder = a % b;

        printf("Quotient = %d\n", Quotient);
        printf("Remainder = %d\n",Remainder);
    }
    else{
        printf("Error! Division by zero is not possible\n");
    }
}