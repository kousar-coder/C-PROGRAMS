#include<stdio.h>
int main(){
	int N,i,j;
	int arr[50];
	printf("Enter array size : ");
	scanf("%d",&N);
	
	printf("Enter an array ");
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++){
		printf("\nElement %d = %d",i,arr[i]);
	}
	printf("\nDuplicates are:");
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(arr[i]==arr[j])
			printf("\n%d",arr[j]);
		}
	}
	return 0;
}
