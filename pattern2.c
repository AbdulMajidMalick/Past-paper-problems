
#include <stdio.h>

int main() {
    for(int i=1;i<=15;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            if( (i+j)%2==0) printf("*");
          else  printf("%d",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
