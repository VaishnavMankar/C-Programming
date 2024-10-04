//Read a string from the user and print it.
#include<stdio.h>
int main()
{
char str[100]; // Declare a character array to hold the string

    // Read a string from the user
    printf("Enter a string: ");
    scanf("%99s", str); // Use %99s to prevent buffer overflow

    // Print the string
    printf("You entered: %s\n", str); // Print the entered string

    return 0;
}