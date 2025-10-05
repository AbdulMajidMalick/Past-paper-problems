#include<stdio.h>
int main(){
    int arr[4],code;
    printf("enter 4 digit QR code");
    scanf("%d",&code);
    if(code>999&&code<10000){
    for(int i=3;i>=0;i--){
        arr[i]=code%10;
        code/=10;
    }
    int d=arr[0]*10+arr[1];
    if(d%2==0||d%4==0){
        printf("category 1");
    }
    else if(arr[3]%3==0&&arr[2]%2==1){
        printf("category 2");
    }
    else{
        printf("category 3");
    }
}
    else{
        printf("invlaid\n");
        return main();
    }
    
    return 0;
}
