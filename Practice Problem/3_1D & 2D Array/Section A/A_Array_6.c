// Read five integers from the user and add them if the addition is greater than 10 divide the addition by 2 else divide the addition by 3 and print the answer.
#include<stdio.h>
int main()
{
    int arr[5];
    int sum = 0;
    printf("Enter 5 integers : \n");
    for(int i = 0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("The sum of 5 integer is %d\n",sum);
    if(sum > 10){
        printf("%d",sum/2);
    }
    else{
        printf("%d",sum/3);
    }
    return 0;
}