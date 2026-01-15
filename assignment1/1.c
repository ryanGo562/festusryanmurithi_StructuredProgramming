#include<stdio.h>
int n;
int temp;
int main(){
    printf("Enter array size:");
    scanf("%d",&n);

    int array[n];

    printf("Enter Array numbers");
    for(int j=0;j<n;j++){
        scanf("%d",&array[j]);
    }

    for(int i=0;i<n;i++){
         for(int k=i+1;k<n;k++){
            if(array[i]>array[k]){
                temp=array[i];
                array[i]=array[k];
                array[k]=temp;
            }
         }
    }
printf("Your sorted Array is:");
for(int i=0;i<n;i++){
    printf("%d",array[i]);
}
}