/*
Name: THEODORA ORWOBA 
Reg no:PA106/G/28828/25
Description:Program showing ones eligibility for final exams.
*/
//Eligible if attendance>=75%
//    and   average marks >=40

#include<stdio.h>//Preprocessor directive 

int main()
{
    float attendance,average_marks;
     //user input
     printf("Enter your attendance rate:");
     scanf("%f",&attendance);
     
     printf("Enter your average_marks:");
     scanf("%f",&average_marks);
     
     if (attendance >=75 && average_marks >=40) {
     printf("Eligible for  the final exams"); }
     
     else {printf("Not Eligible for the final Exams");}
     
    return 0;
}