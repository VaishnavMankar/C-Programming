
// Read five floating-point numbers from the user and print them into a float array
 #include<stdio.h>
 int main()
 {
    float arr[5];

    printf("Entert 5 floting value: \n");
    for(int i = 0; i < 5; i++){
        scanf("%f",&arr[i]);
    }
    printf("The 5 floting value you entered are :\n");
    for(int i = 0; i < 5; i++){
        printf("%f\n",arr[i]);
    }
    return 0;
 }
