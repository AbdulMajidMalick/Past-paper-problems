#include<stdio.h>
int main(){
    int arr[10];
    for(int i=1;i<=10;i++){
        printf("enter salary %d employee",i);
        scanf("%d",arr[i]);
        printf("salary of %d employee is",arr[i]);
    }
    for(int j=1;j<=10;j++){
        if(arr[j]>arr[j+1]){
           int temp;
           temp=arr[j];
           arr[j+1]=arr[j];
           arr[j]=temp;
        }
        printf("highest salary so far is %d",arr[1]);
    }
    return 0;
}
