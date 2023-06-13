#include<stdio.h>
int main(){
	int n,fine;
	
	printf("Enter the number of days the menber is late to return the book");
	scanf("%d",&n);
	
	if(n>=1&&n<=5)
	{
		fine=50*n;
		printf("Your fine = %d paise",fine);
	}
	else
	if(n>=6&&n<=10){
		fine=n*1;
		printf("Your fine = %d Rupees",fine);
	}
	else
	if(n>10&&n<=30){
		fine=n*5;
		printf("Your fine = %d Rupees",fine);
	}
	else
	printf("Your membership has been cancelled!");
}
