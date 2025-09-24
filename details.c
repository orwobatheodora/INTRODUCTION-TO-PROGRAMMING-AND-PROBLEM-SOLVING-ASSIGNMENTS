//simple program displaying personal details 
/* 
Name:THEODORA ORWOBA  
Reg:PA106/G/28828/25p
Description:Program displaying personal details 
*/
#include<stdio.h>//Preprocessor directive 

//main function 
int main ()
{  int height;
  printf("Enter your height:");
  scanf("%d",&height);
  printf("Your height is %d\n",height);
  printf("\n");
  
  int bank_balance;
  printf("Insert your bank balance:");  
  scanf("%d",&bank_balance);
  printf("Your bank balance is %d\n",bank_balance);
  printf("\n");
  
  char ID[9];
  printf("Enter your ID number:");
  scanf("%s",&ID);
  printf("Your ID number is%s\n",ID);
  printf("\n");
  
  int age; 
  printf("Enter your age:");
  scanf("%d",&age);
  printf("Your age is%d\n",age);
  printf("\n");
  
  
  
    return 0;
  
  }