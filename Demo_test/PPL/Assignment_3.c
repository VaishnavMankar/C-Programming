#include<stdio.h>
#include<stdlib.h>
 void selection_sort(int *arr,int count)  ///// creat a function
 {
    int p = 0,temp = 0;
  for(int i = 0;i < count-1;i++)        ////selection sort sorting
        {
            p= i;  
            for(int j=i+1;j<count;j++)
            {
                if(arr[p] > arr[j])  
                {
                    p= j; 
                }
            }
            if(p!= i)                   /////swaping
            {
                 temp = arr[p];
                arr[p] = arr[i];
                arr[i] = temp;
            
            }
        }}
int main()
{

    FILE *file;
    int *arr,count = 0,v= 0,k = 0;        
     file = fopen("number.txt","r");    ////file open
    //   if(file == NULL)   /// file is nul
    // {
    //     printf("\n anatherfile.txt file is not present \n ");
    // }
    while (fscanf(file,"%d",&v) != EOF)    ////element of file
    {
        count++;  
    }
    arr = (int *)malloc(count * sizeof(int));     //// memory allocation syntaqx
     rewind(file);
     int t = 0;
      while (fscanf(file,"%d",&v) != EOF)     //// element stor in memory up to last no
    {
        arr[k] = v; 
        k++; 
        printf("%d\t",v);
    }
     
      
    selection_sort(arr,count);   //// call function
    printf("\nsorted elements are : \n"); //// print
    for(int i = 0;i < count;i++)             
    
        printf("%d\n",arr[i]);
      
     return 0;
   }