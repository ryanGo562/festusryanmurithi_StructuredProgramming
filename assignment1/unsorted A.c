#include<stdio.h>
int a ,val,position;
int main(){
    printf("Enter Array size:\n");
    scanf("%d",&a);

    int array[a+1];
    printf("Enter the array elemnts:\n");
    for(int i=0;i<a;i++){
    scanf("%d",&array[i]);
    }

printf("The current array is:");
for(int i=0;i<a;i++){
    printf("%d",array[i]);
}
printf("\n");
printf("Enter new Array value:\n");
scanf("%d",&val);
printf("Insert the array position:\n");
scanf("%d",&position);

if(position<0 || position>a){
    printf("Enter a valid position\n");

    return 0;
}
for(int i=a;i>position;i--){
    array[i]=array[i-1];
}
array[position]=val;
a++;

printf("New array is:\n");
for(int i=0;i<a;i++){
    printf("%d",array[i]);
}
return 0;
}