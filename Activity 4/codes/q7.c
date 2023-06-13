#include<stdio.h>
int main(){
	int T,n,i,neg,posi,zero;
	printf("\nHow many times you want to input a number");
	scanf("%d",&T);
	
	printf("\nEnter the numbers");
	for(i=0;i<T;i++){
		scanf("%d",&n);
		if(n<0){
			neg++;
		}
		if(n>0){
			posi++;
		}
		if(n==0){
			zero++;
		}
	}
	printf("\n %d numbers are less than 0",neg);
	printf("\n %d numbers are greater than 0 ",posi);
	printf("\n %d numbers are equal to 0",zero);
}
