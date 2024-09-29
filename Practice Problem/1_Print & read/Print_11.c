#include<stdio.h>
int main()
{
    int  integer;
    float floatingpoint;
    double doublePrecision;
    long double longDoublePreciosion;
    char Character;

    printf("Enter an integer:\n");
    scanf("%d",&integer);

    printf("Enter an float:\n");
    scanf("%f",&floatingpoint);

    printf("Enter a double:\n");
    scanf("%lf",&doublePrecision);

    printf("Enter a long double:\n");
    scanf("%Lf",&longDoublePreciosion);

    printf("Enter an character\n");
    scanf(" %c",&Character); //there should a space after double inverted coma

    printf("Integer: %d\n",integer);
    printf("Float: %f\n",floatingpoint);
    printf("Double: %lf\n",doublePrecision);
    printf("Long Double: %Lf\n",longDoublePreciosion);
    printf("Character: %c\n",Character);
    return 0;
}