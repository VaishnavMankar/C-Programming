<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int target;
    scanf("%d",&target);
    int arr[4] = {2,7,11,15};
    for(int i = 0; i < 4; i++){
        for(int j = i+1;j < 4; j++){
            if(arr[i] + arr[j] == target){
                printf("the position will be %d and %d = %d",i,j,target);
                //return;
            }
        }
    }
    return 0;
=======
#include<stdio.h>
int main()
{
    int target;
    scanf("%d",&target);
    int arr[4] = {2,7,11,15};
    for(int i = 0; i < 4; i++){
        for(int j = i+1;j < 4; j++){
            if(arr[i] + arr[j] == target){
                printf("the position will be %d and %d = %d",i,j,target);
                //return;
            }
        }
    }
    return 0;
>>>>>>> 2a1fe5c1f7dbb530eef8525d0290f89892e17360
}