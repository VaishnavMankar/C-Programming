#include<stdio.h>
int main()
{
    char word[50];
    
    printf("Enter the string\n");
    scanf("%s",word);
    printf("%s",word);

    char str[10];
    printf("Enter another string\n");
    for(int i = 0; i < 10; i++){
        scanf("%c",&str[i]);
    }
    for(int i = 0; i < 10; i++){
       printf("%c", str[i]);
    }
    return 0;
}