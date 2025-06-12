//https://www.youtube.com/watch?v=MQIF-WMUOL8
#include <stdio.h>
int main(){
    FILE * fptr;

    fptr = fopen("SelectionSort_PC_1.c","r");

    if(fptr != NULL){
      printf("File open successful");
    }
    else{
     printf("File open Unsuccessful");
    }
    return 0;
}


