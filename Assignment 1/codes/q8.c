#include<stdio.h>
int main(){
	int n,c,i,j;
	printf("Enter an integer");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		printf("\n%d is a prime number",n);
		printf("\n");
		for(i=n;i>=-3;i--){
			printf("%d ",i);
		}
	}
	else{
		printf("\n%d is not prime number",n);
	}
}
