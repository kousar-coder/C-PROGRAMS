#include<stdio.h>
int main(){
   float Total_amnt_after_disc,cost_on_indivisual;	
	int RS;
	
	
	printf("Enter ticket of movie on weekdays");
	scanf("%d",&RS);
	
	Total_amnt_after_disc=(20*RS*4)/100;
	cost_on_indivisual=(20*RS)/100;
	
	
	printf("\nTicket of movie on weekdays=%d",RS);
	printf("\nTotal amount after discount=%f",Total_amnt_after_disc);
	printf("\nCost on an indivisual=%f",cost_on_indivisual);
	
}
