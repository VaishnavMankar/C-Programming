//https://www.youtube.com/watch?v=fLPqn026DaE
#include<stdio.h>
int main()
{
    FILE * fh;

    fh = fopen("SeleCtionSort_PC_1.c","r");

    if(fh != NULL){
        char c;
        while((c = fgetc(fh)) != EOF)
        putchar(c);

        fclose(fh);
    }
    else{ 
        printf("Error option file.\n");
    }
    return 0;
}