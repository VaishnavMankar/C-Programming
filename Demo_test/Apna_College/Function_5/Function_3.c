//question 28
#include<stdio.h>

void namaste();
void bonjour();

int main()
{
    printf("Enter f for french and i for indion: \n");
    char ch;
    scanf("%c",&ch);
    if(ch == 'i'){
        namaste();
    }
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste\n");
    //bonjour();
}
void bonjour(){
    printf("Bonjour\n");
}