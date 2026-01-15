#include<stdio.h>
int n;
int main(){
printf("Enter Array size;");
scanf("%d",&n);
    int array[n];

    printf("Enter 4 digits for the array:");
    for(int i=0;i<4;i++){
        scanf("%d",&array[i]);
    }
printf("The array's unique elements are:");
    for(int i=0;i<4;i++){
       int c=0;
       for(int j=0;j<4;j++){
        if(array[i]==array[j]){
            c++;
        }
       }
       if(c==1){
        printf("%d",array[i]);
       }
    }
}