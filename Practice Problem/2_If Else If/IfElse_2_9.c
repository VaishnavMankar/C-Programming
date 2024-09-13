#include<stdio.h>
int main()
{
    int a , rem;
    printf("Enter an integer = \n");
    scanf("%d", &a);

    if(a >= 100 && a <= 200){
        rem = a/3;
        if(rem < 50){
        printf("Small number\n");
        }
        else if(rem > 50){
            printf("Not so big number\n");
        }
    }
    else if(a >= 200 && a <= 300){
        rem = a /2;
        if (rem <= 110){
            printf("%d\n",rem);
        }
        else{
            rem = a/ 5;
            printf("%d\n",rem);
        }
    }
    else if(a > 300){
       printf("%d is a very big number",a);
    }
    return 0;

}