#include <stdio.h>

int main() {
    int arr[6], count, i, j;

    printf("Enter 6 integers:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElement occurrences:\n");

    for (i = 0; i < 6; i++) {
        count = 1;
        
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count = 0;
                break;
            }
        }

        if (count == 1) { 
            count = 0;
            for (j = i; j < 6; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    
    return 0;
}
