#include<stdio.h>
int main(){
	int N,i,j,temp;
	int arr[50];
	printf("Enter array size : ");
	scanf("%d",&N);
	
	printf("Enter an array ");
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
		}
		for(i=0;i<N-1;i++){
			for(j=0;j<N-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
		}
	}
	printf("\nAsscending Order:");
		for(i=0;i<N;i++){
			printf("%d ",arr[i]);
		}	
		
}
