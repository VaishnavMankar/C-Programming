// #include <stdio.h>
// #include<stdlib.h>
// void swap(int *xp,int *yp)//swapping the elements
// {
//     int temp=*xp;
//     *xp=*yp;
//     *yp=temp;


// }
// void selectionSort(int arr[], int n)//sorting the array using selection  sort
// {
//     int i, j, min_idx;

//     for (i = 0; i < n - 1; i++)
//     {
//         min_idx = i;
//         for (j = i + 1; j < n; j++)
//             if (arr[j] < arr[min_idx])
//             min_idx = j;
//             swap(&arr[min_idx],&arr[i]);
        
//     }
                
// }
// int main()
// {

//     int i = 0,n;
   
//     FILE *fptr;

    
//     fptr = fopen("number.txt", "r");//opening the file in read mode
//     fscanf(fptr,"%d",&n);

//     int arr =(int)malloc(n*sizeof(int)); //calloc(n,sizeof(n));
//     while (fscanf(fptr, "%d", &arr[i]) !=EOF)//reading input from the file until end of file
//     {
       
//         i++;
//     }

//     selectionSort(arr, n);
 

    
//     for (i = 0; i < n; i++)//printing sorted elements
//     {
//         printf("%d\t ", arr[i]);
//     }

//     return 0;
// }