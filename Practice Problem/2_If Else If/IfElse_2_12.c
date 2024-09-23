#include<stdio.h>
int main()
{
    int n;
    float result;
    printf("Enter a number:\n");
    scanf("%d",&n);

    switch (n)
    {
    case 10:
    case 12:
    case 30:
    result = n/2;
    printf("result after dividing by 2: %f\n",result);
        break;

    case 40:
    case 50:
    result = n / 3;
    printf("result after dividing by 3: %f\n",result);    
    
    default:
    result = n / 4;
    printf("result after dividing bty 4: %f\n",result);
        break;
    }
    return 0;
}