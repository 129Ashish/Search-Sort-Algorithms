#include<stdio.h>
int main(){
int search[20],key,size,i;
printf("Enter the total number of elements in an array :\n");
scanf("%d",&size);
printf("Enter the elements in array:\n");
for(i=0;i<size;i++){
    scanf("%d",&search[i]);
}
printf("Enter the element you want to search :");
scanf("%d",&key);
for(i=0;i<size;i++){
if(search[i]==key)
{
    printf("%d is found at %d position of an array",key,i+1);
    break;

}
}
if(i==size){
    printf("%d is not found in the given array \n",key);
}
    return 0;
}


