#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;
    int *a,p = 0,t1 = 0,c = 0,v = 0,k = 0,t = 0;
     file = fopen("number.txt","r");
      if(file == NULL)
    {
        printf("\n anatherfile.txt file is not present \n ");
    }
    while (fscanf(file,"%d",&v) != EOF)
    {
        c++;  
    }
    a = (int *)malloc(c * sizeof(int));
     rewind(file);
      while (fscanf(file,"%d",&v) != EOF)
    {
        a[k] = v;
        k++; 
    }
     fclose(file);

    
     for(int i = 0;i < c-1;i++)
        {
            p= i;  
            for(int j=i+1;j<c;j++)
            {
                if(a[p] > a[j])  
                {
                    p= j; 
                }
            }
             if(p != i)
            {
                
                t = a[p];
                a[p] = a[i];
                a[i] = t;
            }
        }
          
         printf("Elements are : \n");
    for(int i = 0;i < c;i++)
    {
        printf("%d\n",a[i]);
    }
     free(a);
     return 0;
   }