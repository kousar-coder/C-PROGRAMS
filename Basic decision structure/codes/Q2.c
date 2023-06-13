#include<stdio.h>
int main (){
	int atm,sea,d_type;
	printf("Enter atmosphere[Cloudy==>1,Sunny==>2,Rainy==>3] ");
	scanf("%d",&atm);
	printf("Enter season[spring==>4,Winter==>5,Summer==>6] ");
	scanf("%d",&sea);
	printf("Enter daytype[week days==>7,Weekend==>8,week days or weekend==>9] ");
	scanf("%d",&d_type);
	
  if(atm==1 && sea==4 && d_type==7)
  printf("Your mood is Good");
  
  else if(atm==1 && sea==5 && d_type==8)
  printf("Your mood is Good");
  
  else if(atm==1 && sea==6 && d_type==9)
  printf("Your mood is Good");
  
  else if(atm==2 && sea==4 && d_type==7)
  printf("Your mood is Good");
  
  else if(atm==2 && sea==5 && d_type==9)
  printf("Your mood is Good");
  
  else if(atm==2 && sea==6 && d_type==9)
  printf("Your mood is Bad");
  
  else if(atm==3 && sea==4 && d_type==8)
  printf("Your mood is Good");
  
  else if(atm==3 && sea==5 && d_type==8)
  printf("Your mood is Bad");
  
  else if(atm==3 && sea==6 && d_type==8)
  printf("Your mood is Good");
  
  else
  printf("Choose correct option");
}

