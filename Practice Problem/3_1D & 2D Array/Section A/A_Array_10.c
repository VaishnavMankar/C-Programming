// Read a string with spaces from the user and print it (e.g. “Hello World”).
#include<stdio.h>
int main()
{
    char string[20];
    printf("Enter the string:\n");
    for(int i = 0;i < 20; i++){
        scanf("%c",&string[i]);
    }
    for(int i = 0; i < 20; i++){
        printf("%c",string[i]);
    }
    return 0;
}