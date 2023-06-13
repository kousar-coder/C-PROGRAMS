#include<stdio.h>
int main(){
	float matric,inter,test,obtained;
	
	printf("Enter your matriculation marks out of 1100");
	scanf("%f",&matric);
	
	printf("Enter your Intermediate marks out of 1200");
	scanf("%f",&inter);
	
	printf("Enter your admission test marks out of 100");
	scanf("%f",&test);
	
	obtained=((20*matric)/1100)+((20*inter)/1200)+((60*test)/100);
	
	printf("\nTotal score=%f",obtained);
}
