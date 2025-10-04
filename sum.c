#include<stdio.h>
int main(){
    int num,sum=0;
    char choice;
    do{
        printf("entered number\n");
        scanf(" %d",&num);
        sum+=num;
        printf("sum is equal to %d\n",sum);
        printf("do you want to entered another number(y/n):");
        scanf(" %c",&choice);
    }while(choice=='Y'|choice=='y');
    printf("\ntotal sum of all entered number is:%d",sum);
    return 0;
}
