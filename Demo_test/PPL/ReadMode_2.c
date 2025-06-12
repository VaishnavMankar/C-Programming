//https://www.youtube.com/watch?v=MQIF-WMUOL8
#include <stdio.h>
int main(){
    FILE * fptr;

    fptr = fopen("SelectionSort_PC_1.c","r");
    char content[1000];

    if(fptr != NULL){
      while  (fgets(content,1000,fptr)){
      printf("%s",content);
      }
    }
    else{
     printf("File open Unsuccessful");
    }
    return 0;
}


