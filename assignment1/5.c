#include<stdio.h>
int n;
int sum;
int main(){
printf("Enter array size:\n");
scanf("%d",&n);
int array[n];
    printf("Enter  digits below:");
    for(int i=0;i<3;i++){
     scanf("%d",&array[i]);
    }

    for(int i=0;i<3;i++){
        sum += array[i];
    }
    printf("Sum of elements stored in the array is:%d",sum);
}