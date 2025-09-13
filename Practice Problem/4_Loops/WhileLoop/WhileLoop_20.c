//  20.Print characters from A to Z using for loop

#include <stdio.h>

int main() {
    char ch = 'A';
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    return 0;
}
