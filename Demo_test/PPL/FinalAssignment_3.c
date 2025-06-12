#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    int* arr,count =0,values = 0,index = 0,temp;
    file = fopen("number.txt","r");   //this comand oppen the file ind rad it using command"r"
    while(fscanf(file,"%d",&values) != EOF){ //EOF helps to read the file till end
        count++;                        //this are the total number of element in tha file
    }
    arr = (int *)malloc(count * sizeof(int));// here we are creating dynamic array for arr
      rewind(file); //this comand will take the 
    while(fscanf(file,"%d",&values) != EOF){
         arr[index] = values;          //storing value in arr
         index++;
    }
    fclose(file);

    for(int i = 0; i < count-1; i++){         //sorting the array uusing selection sort
        int min_val = i;
        for(int j = i+1; j < count; j++){    
            if(arr[min_val] > arr[j]){
                min_val = j;
            }
        }
        if(min_val != i){
                temp = arr[min_val];
                arr[min_val] = arr[i];
                arr[i] = temp;
            }
    }
    printf("Element are : \n");
    for(int i = 0; i < count; i++){ // pritinng the array
         printf("%d\n",arr[i]);
    }
    free(arr); //from here we can use this array again 
    return 0;


}