
#include <stdio.h>

int main() {
    int seat,gold,silver,platinum,i,goldused=0,silverused=0,platinumused=0,sold,revenue=0;
    char type;
    printf("Enter total number of gold seat:");
    scanf("%d",&gold);
    printf("Enter total number of siver seat:");
    scanf("%d",&silver);
    printf("Enter total number of platinum seat:");
    scanf("%d",&platinum);
    seat=gold+silver+platinum;
     printf("Enter total number of ticket sold:");
    scanf("%d",&sold);
    for(i=1;i<=sold;i++){
        if(seat>0){
        printf("Enter type of ticket %d (G,P,S)\n",i);
        scanf(" %c",&type);
        if(type=='g'||type=='G'){
            if (gold>0){
            gold--;goldused++;seat--;
            revenue=revenue+700;
            }
            else{
            	printf("\a incorrect type\n type cannot exceed the limit of seat plz contact the counter 4 or enter correct type \n");
            	i--;
			}
        }
        else if(type=='p'||type=='P'){
             if(platinum>0){
            platinum--;platinumused++;seat--;
            revenue=revenue+1000;
             }
             else{
             	printf("\a incorrect type\n type cannot exceed the limit of seat plz contact the counter 4 or enter correct type\n ");
             	i--;
			 }
    }
     else if(type=='s'||type=='S'){
         if(silver>0){
            silver--;silverused++;seat--;
            revenue=revenue+400;
         }
         else{
         	printf("\aincorrect type\n type cannot exceed the limit of seat plz contact the counter 4 or enter correct type\n ");
         	i--;
		 }
     }
        
     else{
        	printf("invalid input enter correct one:\n");
        	i--;
		}
	}
        else{
            printf("not available");
        }
        }
    printf("total revenue is %d\n : ",revenue) ;
    printf("total gold seat sold %d\n",goldused);
   printf("total silver seat sold %d\n",silverused);
   printf("total platinum seat sold %d\n",platinumused);
    
    return 0;
}
