#include<stdio.h>
#include<math.h>
int main(){
	int years,i,p;
	float R,Amnt;
	
	printf("\nEnter the initial investment amount");
	scanf("%d",&p);
	
	printf("\nEnter the interest rate");
	scanf("%f",&R);
	
	printf("\nEnter the number of years");
	scanf("%d",&years);
	
	if(p>=0&&p<=10000&&R>=0&&R<=1&&years>=1&&years<=30){
		for(i=1;i<=years;i++){
			Amnt=pow((p*(1+R)),i);
			printf("\nYear %d : %f",i,Amnt);
		}
	}
	else{
		printf("Enter valid choice!");
	}
}
