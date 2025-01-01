#include <stdio.h>
#include <stdbool.h>

int main() {
    int N[8] = {1, 2, 3, 4, 4, 3, 2, 1};
    bool isPalindrome = true;

    for (int i = 0, j = 7; i < j; i++, j--) {
        if (N[i] != N[j]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("palindrome.\n");
    } else {
        printf("not a palindrome.\n");
    }

    return 0;
}
