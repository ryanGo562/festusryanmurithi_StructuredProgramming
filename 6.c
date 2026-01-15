#include<stdio.h>
int two_D[6][4];
int main(){
    printf("Enter array elements:");
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            printf("Data [%d][%d]:",i,j);
            scanf("%d",&two_D[i][j]);
        }
    }
    printf("Your 2D array is;");
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            printf("%d",two_D[i][j]);
        }
        printf("\n");
    }
}