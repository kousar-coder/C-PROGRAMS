#include<stdio.h>
int main(){
	int n,i,fact=0;
	
	printf("Enter a positive integer ");
	scanf("%d",&n);
	fact=n;
	if(n>=1 && n<=12){
		for(i=n-1;i!=1;i--){
			fact=fact*i;
		}
		printf("The factorial of %d is %d",n,fact);
	}
	else{
		printf("enter valid choice!");
	}
}
