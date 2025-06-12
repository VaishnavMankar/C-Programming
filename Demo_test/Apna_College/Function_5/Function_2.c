//question 27
#include<stdio.h>
//decleration/prototype
void printHello();
void printGoodbye();

int main()
{
    printHello(); //function call
    printGoodbye();
    return 0;
}

//function defenation
void printHello()
{
    printf("Hello World\n");
}

void printGoodbye(){
    printf("Good Bye\n");
}