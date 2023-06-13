//REVERSING OF ARRAY
#include<stdio.h>
int main(){
     int i,N,arr1[10], arr2[10];

	printf("Enter array size : ");
    scanf("%d",&N);
	
	printf("Enter an array: ");
	for(i=0;i<N;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("\nOriginal array: ");
	for(i=0;i<N;i++){
		printf("%d ",arr1[i]);
	}
	
	//Copying array in reverse order: 
	for(i=0;i<N;i++){
		arr2[i] = arr1[N-i-1];
	}
	
	printf("\nCopied array in reverse order: ");
	for(i=0;i<N;i++){
		printf("%d ", arr2[i]);
	}
	
	return 0;
}



    
