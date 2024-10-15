#include<stdio.h>
int main()
{
    char name[50];
    char hometown[100];
    int age;
    printf("Enter your name:\n");
    gets(name);
    printf("Your name: %s\n",name);
    printf("Enter your adress:\n");
    gets(hometown);
    printf("Your name: %s\n",hometown);
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("your age is %d \n",age);
    return 0;

}