#include<stdio.h>
#include<stdlib.h>
int main()
{
    int chars, i =0;
    char *ptr;
    while(i < 3){
        printf("Employee %d: Enter the number of characters in your employee id\n",i+1);
        scanf("%d",&chars);
        ptr = (char *)malloc((chars+1)*sizeof(char));
        printf("Enter your Employee ID\n");
        scanf("%s",ptr);
        printf("Your Employee ID is %s\n",ptr);
        free(ptr);
        i = i + 1;
    }
    return 0;
}
