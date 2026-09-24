/*
Name;Benard Njenga
Reg no;CT100/G/30708/26
Description;User input for the for their height , bank balance and phone number 
*/

#include <stdio.h>

int main(){
     float height ;
     double bank_balance ;
     char phone_number [15];
     

     printf("Enter your height in meters : ");
     scanf("%f",&height);
     
     printf("Enter your bank balance in Ksh : ");
     scanf("%lf",&bank_balance);
     
     printf("Enter your phone number : ");
     scanf("%s",&phone_number);
     
     printf("\n----- User details -----\n");
     printf("Height :%.2f meters\n",height);
     printf("Bank balance :Ksh %.2lf \n",bank_balance);
     printf("Phone number :%s \n",phone_number);
     
     return 0 ;
  }
