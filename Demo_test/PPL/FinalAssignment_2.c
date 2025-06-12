#include<stdio.h>
#include<stdlib.h>
void  selectionSort(int arr[],int n){
    int temp;
   for(int i = 0; i < n-1; i++){
        int min_val = i;
        for(int j = i+1; j < n; j++){
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
}

int main()
{
   
    int i = 0;
    int n;

     FILE *file;

    file = fopen("number.txt","r");
    fscanf(file,"%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    for(i = 0; i < n ; i++){
    if (fscanf(file, "%d", &arr[i]) != 1) {
            free(arr);
            fclose(file);
        }
}

    fclose(file);

    selectionSort(arr,n);

    for(i = 0; i < n; i++){
         printf("%d\n",arr[i]);
    }
    free(arr);

    return 0;
}
