#include<stdio.h>
int main(){
    int n1,n2,total=0;
    printf("enter n1:");
    scanf(" %d",&n1);
     printf("enter n2:");
    scanf(" %d",&n2);
    n1*n2;
    do{
        if(n1%2==1){
            total=total+n2;
        }
        n1=n1/2;
        n2=n2*2;
        
    }while(n1!=0);
            printf(" %d",total);
    return 0;
}
