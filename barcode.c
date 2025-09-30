
#include <stdio.h>

int main() {
    int barcode;
    printf("enter barcode");
    scanf("%d",&barcode);
    if(barcode>9999&&barcode<=99999){
        if(barcode%2==0&&barcode/10%2==0||(barcode%4==0&&barcode/10%4==0)){
            printf("category 1");
        }
        else if(barcode%3==0&&barcode/10%2==1){
            printf("category 2");
        }
        else{
            printf("category 3");
        }
    }
    else{
        printf("invalid barcode");
    }
    return 0;
}
