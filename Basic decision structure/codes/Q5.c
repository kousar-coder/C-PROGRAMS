#include <stdio.h>
int main (){
 float cost_shopping,act_amnt,saved_amnt,disc_amnt;
 
 printf("Enter amount of shopping");
 scanf("%f",&cost_shopping);
  
 printf("\nYour actual amount is %f",cost_shopping);
 
 if(cost_shopping>=2000 && cost_shopping<=4000)
 {
 	saved_amnt=(20*cost_shopping)/100;
 	disc_amnt=cost_shopping-saved_amnt;
 	printf("\nSaved amount =%f",saved_amnt);
 	printf("\nAmount after discount = %f",disc_amnt);
 }
 
 else
  if(cost_shopping>=4001 && cost_shopping<=6000)
 {
 	saved_amnt=(30*cost_shopping)/100;
 	disc_amnt=cost_shopping-saved_amnt;
 	printf("\nSaved amount =%f",saved_amnt);
 	printf("\nAmount after discount = %f",disc_amnt);
 }
 else
  if(cost_shopping>6000)
 {
 	saved_amnt=(50*cost_shopping)/100;
 	disc_amnt=cost_shopping-saved_amnt;
 	printf("\nSaved amount =%f",saved_amnt);
 	printf("\nAmount after discount = %f",disc_amnt);
 }
 else
 printf("Sorry discount will not be applied ");
 
}

