#include<stdio.h>
int n;
int main(){
    printf("Enter array size:\n");
    scanf("%d",&n);

    int array[n];
    
    printf("Enter 3 digits for the Array:");
    for(int m=0;m<3;m++){
        scanf("%d",&array[m]);
    }
        int max=array[0];
        int min=array[0];
    for(int m=0;m<3;m++){
        
if(array[m]>max ){
    max=array[m];
}
if(array[m]<min ){
    min=array[m];

}
    }
        printf("Maximum element:%d\n",max);
        printf("Minimum element:%d\n",min);
}