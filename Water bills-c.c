/* 
Name: THEODORA ORWOBA 
Reg no:PA106/G/ 28828/25
Description:Program  to  determine water bills 
*/
/* 
Water Bills
<30-20kes_per_unit
>31,<60-25kes_per_uit
>60-30kes_per_unit
*/
#include<stdio.h>

int main()
{ 
float units,totalwaterbills;
//user input 
printf("Enter the number of units:");
scanf("%f",&units);

if (units <=30){totalwaterbills=units*20;}

else if (units <=60){totalwaterbills=units*25;}

else{totalwaterbills=units*30;}
  
  printf("totalwaterbills: %0.2fKES",totalwaterbills);

    return 0;//execution successful 
}