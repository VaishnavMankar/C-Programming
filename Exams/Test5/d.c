#include <stdio.h>

int main() {
    int even = 0; 
    int odd = 0;  
    int N[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++) {
        if (N[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);
    return 0;
}
