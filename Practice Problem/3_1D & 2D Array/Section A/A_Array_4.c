//Read five characters from the user and print them using a character array.
#include<stdio.h>
int main()
{
    char character[5];
    
    printf("Enter 5 character you want to print:\n");
    for(int i = 0; i < 5; i++){
        scanf(" %c", &character[i]);
    }
    printf("The 5 character you want to print\n");
    for(int i = 0; i < 5; i++){
        printf("%c\n", character[i]);
    }
    return 0;
}
