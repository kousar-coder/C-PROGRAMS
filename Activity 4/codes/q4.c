#include<stdio.h>
int main(){
	int n,i,sum=0;
	for(i=1;;i++){
		printf("Enter a number");
		scanf("%d",&n);
		if(n>0){
			sum+=n;
		}
		else{
			break;
		}
	}
	printf("\nSUM=%d",sum);	
	
}
