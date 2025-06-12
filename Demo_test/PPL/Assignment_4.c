#include <stdio.h>
#include<stdlib.h>
void selectionSort(int arr[], int n)//sorting the array using selection  sort
{
    int i, j, min_indx,temp;

    for (i = 0; i < n - 1; i++)
    {
        min_indx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_indx])
            {
            min_indx = j;
            }
        }
    if(min_indx!=i)
    {
        temp=arr[min_indx];
        arr[min_indx]=arr[i];
        arr[i]=temp;
    }
    }
}
int main()
{

    int i = 0;
    int n;
   
    FILE *fptr;

    
    fptr = fopen("number.txt", "r");//opening the file in read mode
    fscanf(fptr,"%d",&n);

    int *arr =(int*)malloc(n*sizeof(int)); //calloc(n,sizeof(n));
    while (fscanf(fptr, "%d", &arr[i]) !=EOF)//reading input from the file until end of file
    {
       
        i++;   
    }

    selectionSort(arr, n);
 

    
    for (i = 0; i < n; i++)//printing sorted elements
    {
        printf("%d\t ", arr[i]);
    }

    return 0;
}