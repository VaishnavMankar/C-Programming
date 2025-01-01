#include <stdio.h>

int main() {
    int N[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    for (int i = 0; i <= 9; i++) {
        if (i % 2 != 0) {  
            sum += N[i];  
        }
    }
    printf("Sum of numbers at odd positions: %d\n", sum);
    return 0;
}