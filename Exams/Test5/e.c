 #include<stdio.h>
 int main()
{
    int N[5];
    printf("Enter the element of an array ");
    for(int i =0; i < 5; i++){
        scanf("%d",&N[i]);
    }
    int N2[5];
    for(int i = 0; i < 5;i++){
        N[i] == N2[i];
    }
    for(int i = 0; i < 5;i++){
        printf("%d\n",N2[i]);
    }
    return 0;
}