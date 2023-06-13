#include<stdio.h>
int main(){
	
	int driving_record, car_type;
	
	printf("Enter your driving record \n'0' for clean \n'1' for one speeding ticket \n'2' for two speeding ticket");
	scanf("%d",&driving_record);
	
	printf("Enter your car type \n'3' for sedan \n'4' for truck \n'5' for sports car");
	scanf("%d",car_type);
	
	
	if(driving_record==0){
		if(car_type==3){
			printf("\nYour premium rate is $100 per year");
		}
		else if(car_type==4){
			printf("\nYour premium rate is $200 per year");
		}
		else{
		printf("\nYour premium rate is $150 per year");
	}
	}
	else if(driving_record==1){
		if(car_type==3){
			printf("\nYour premium rate is $110 per year");
		}
		else if(car_type==4){
			printf("\nYour premium rate is $220 per year");
		}
		else{
		printf("\nYour premium rate is $165 per year");
	}
	}
	else if(driving_record==2){
		if(car_type==3){
			printf("\nYour premium rate is $120 per year");
		}
		else if(car_type==4){
			printf("\nYour premium rate is $240 per year");
		}
		else{
		printf("\nYour premium rate is $180 per year");
	}
	}
	else{
	printf("\nInvalid choice");
}
	
}
