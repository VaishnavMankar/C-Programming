#include<stdio.h>
int main()
{
    int currectPas = 1234;
    int enterPas;
    do{
        printf("Enter your password = \n");
        scanf("%d", &enterPas);

        if(enterPas == currectPas){
            printf("The password is currect\n");
        }
        else{
            printf("The password is incorrec!\n");
        }
    }
    while(enterPas != currectPas);
        return 0;
}