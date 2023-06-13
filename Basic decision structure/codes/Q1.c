#include<stdio.h>
int main(){
	int dis,time;
	float speed;
	printf("Enter distance in meter: ");
	scanf("%d",&dis);
	
	printf("Enter time in seconds: ");
	scanf("%d",&time);
	
	speed=dis/time;
	printf("Speed is %f",speed);
	
	if(speed<10)
	printf("\nStatic speed");
	else if(speed>=10 && speed<=40)
	printf("\nLow speed");
	else if(speed>=41 && speed<=65)
	printf("\nAverage speed");
	else if(speed>=66 && speed<=90)
	printf("\nHigh speed");
	else
	printf("\nOut of control");
	
}
