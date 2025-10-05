#include <stdio.h>

int main() {
    int qrCodes[4];
    int i;

    for (i = 0; i < 4; i++) {
    printf("Enter 4 QR codes (6-digit each):\n");
        scanf("%d", &qrCodes[i]);
    if(qrCodes[i]<99999||qrCodes[i]>1000000){
        printf("\ninvalid plz enter 6 digit code\n");
        i--;
        
    }   
    }

    for (i = 0; i < 4; i++) {
        int code = qrCodes[i];
        int firstTwo = code / 10000;              
        int lastDigit = code % 10;                 
        int secondLastDigit = (code / 10) % 10;    
        if (firstTwo % 2 == 0 || firstTwo % 4 == 0) {
            printf("QR Code %d belongs to Category 1\n", code);
        } else if (lastDigit % 3 == 0 && secondLastDigit % 2 == 1) {
            printf("QR Code %d belongs to Category 2\n", code);
        } else {
            printf("QR Code %d belongs to Category 3\n", code);
        }
    }
    
    

    return 0;
}
