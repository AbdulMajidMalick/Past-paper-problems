#include<stdio.h>
int main(){
    int choice,time,slotcharge=0,treatmentfee=0,totalbill=0;

    printf("                Welcome to Dr. SAna Hoor Dental Clinic          ");
    printf("\n1.Consultion.\n2.Teeth Whitening\n3.Braces.\n4Root Canal.\n5Surgical gum graft\n6.EXIT.\n");
    scanf("%d",&choice);
    switch(choice){
       case 1:
         treatmentfee=2000;
         
          break;
      case 2:
      treatmentfee=2500;
       break;
      case 3:
      treatmentfee=10000;
       break;
      case 4:
      treatmentfee=14000;
       break;
      case 5:
      treatmentfee=8000;
       break;
      case 6:
      return 0;
      default:
      printf("\n \a invalid input");
    }
    printf("\nTime slots:");
    printf("\n1.9am-12pm\n2.2pm-4pm\n3.6pm-8pm.\n");
    scanf("%d",&time);
         if(time==1){
             slotcharge=500;
         }
             else if(time==2){
                slotcharge=1000; 
             }
             else if(time==3){
                 slotcharge=2000;
             }
             else{
                 printf("invalid input");
             }
        
             
    
    
    totalbill=treatmentfee+slotcharge;
    printf("total bill is %d",totalbill);
    return 0;
}
