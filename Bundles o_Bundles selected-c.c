/* 
Name: THEODORA ORWOBA 
Reg no:PA106/G/ 28828/25
Description:Program  to  determine bundles selected
*/
#include<stdio.h>

int main ()
{
int your_choice;
 printf("1. 100MB @ 50\n");
 printf("2. 500MB @ 200\n");
 printf("3. 1 GB  @ 350\n");
 printf("4. 2 GB  @ 600\n");
printf("\n");

//user input 
printf(" Enter your_choice:");
scanf ("%d",&your_choice);

switch (your_choice){
case 1 :
printf("You selected 100MB. Cost 50KES");
break; 

case 2: 
printf("You selected 500MB. Cost 200KES");
break;

case 3:
printf("You selected 1 GB. Cost 350KES");
break;

case 4:
printf("You selected 2GB. Cost 600KES");
}
 if (your_choice>4) 
 printf("Invalid choice");
 

    return 0;//execution successful 
}