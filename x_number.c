#include<stdio.h>

int main()
{int x_number,i,a,b,result=0,steps=0;
    printf("Enter an integer: ");
    scanf("%d", &x_number);
    printf("You entered: %d\n", x_number);
    for(i=1;i<=10;i++)
    {
       result=0;
       int temp=x_number;
        while(temp>0){
        a=temp%10;
        result=a*a+result;
         temp=temp/10;}
         x_number=result;
         steps++;
if (x_number==1)
{
    printf("It is a x_number\n");
    printf("step=%d",steps);
    break;
}
    }

if(x_number!=1)
{
    printf("It is not a x_number\n");
     printf("step=%d",steps);
}

    return 0;
}
