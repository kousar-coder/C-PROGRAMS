#include<stdio.h>
int main(){
	int a,b,c,waste;
	
	printf("\nEnter the food waste for breakfast:");
	scanf("%d",&a);
	
	printf("\nEnter the food waste for lunch:");
	scanf("%d",&b);
	
	printf("\nEnter the food waste for dinner:");
	scanf("%d",&c);
	waste=a+b+c;
	printf("\nTotal food waste for the day:%d",waste);
}
