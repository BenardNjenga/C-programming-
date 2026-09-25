/*
Name: Benard Njenga
Reg no: CT100/G/30708/26
Description: Qualifications fo4 a person to take a loan from a bank (Not specified which bank)
*/

# include <stdio.h>

int main()
{
    int age;
    float income;
    
    printf("Enter your age:\t");
    scanf("%d",&age);
    
    printf("Enter your annual income in Ksh:\t");
    scanf("%f",&income);
    
if (age >= 21 && income >=21000){
    printf("Congratulations you qualify for a loan.");
} else {
    printf("Unfortunately, we are unable to offer you a loan at this time .");
}

  return 0;
  
