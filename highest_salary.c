#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("enter salary %d employee\n",i+1);
        scanf("%d",&arr[i]);
        printf("salary of number %d employee is %d\n",i+1,arr[i]);
    }
    for(int i=0;i<=9;i++){
	
    for(int j=1;j<=9;j++){
        if(arr[j]>arr[0]){
           arr[0]=arr[j];
           arr[j]=arr[0];
        }
		}
    }
        printf("highest salary so far is %d",arr[0]);
    return 0;
}
