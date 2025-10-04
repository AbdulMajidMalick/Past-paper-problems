#include<stdio.h>
int main(){
    int deposite=0,withdrawl=0;
    float balance=5000.00, transaction=0.00;
    do{
        printf("\nEnter your transaction amount(+ve for deposite)(-ve for withdrawl)\n");
        scanf("%f",&transaction);
        if(balance>=0){
        if(transaction>0){
          balance+=transaction;
          deposite++;
          printf("your remaing balance is:%.2f\n",balance);
        }
        else if(transaction<0&&balance<transaction){
            balance+=transaction;
          withdrawl++;
          printf("your remaing balance is:%.2f",balance);
        }
        else{
            printf("insuficient account balance");
        }
        }
         else{
            printf("insuficient account balance");
        }
        
    }while(transaction!=0);
    printf("\nfinal balance remainig is %.3f\n",balance);
     printf("total deposit:%d\n",deposite);
      printf("Total withdrawl:%d",withdrawl);
    return 0;
}
