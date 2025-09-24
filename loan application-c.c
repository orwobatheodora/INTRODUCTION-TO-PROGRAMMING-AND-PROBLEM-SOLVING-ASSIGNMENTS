/*
Name :THEODORA ORWOBA 
Reg no::PA106/G/28828/25
Description:Program showing if one qualifies for a loan
*/
#include<stdio.h> //Preprocessor directive 

int main ()
{
  int age;
  float income ;
  //Prompting user to input 
  printf("Enter your age:");
  scanf("%d",&age);
  
  printf("Enter your income:");
  scanf("%f",&income);
  
  if(age>=21 && income>=21000){
  printf("Congratulations you are eligible for a loan");
  }
  else{
  printf("Sorry you are not eligible for a loan");
  }
  return 0;// execution successful 
  }

    