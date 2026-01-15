#include<stdio.h>
int n;
int main(){
    printf("Enter array size:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter  integers below;");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    printf("Values stored in the array are: %d %d %d\n", arr[0], arr[1], arr[2]);

    printf("values stored in the array in reverse are:");
    for(int i=2;i>=0;i--){
        printf(" %d ",arr [ i ]);
    }
}