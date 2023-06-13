#include<stdio.h>
int main(){
	int N,M,i;
	
	printf("\nEnter table number");
	scanf("%d",&N);
	printf("Enter the M times of table");
	scanf("%d",&M);
	for(i=1;i<=M;i++){
		printf("\n%dx%d=%d",N,i,N*i);
	}
}
