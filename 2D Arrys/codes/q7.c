#include<stdio.h>
int main(){
	int mtrx[3][3],i,j,trace;
    
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("Enter elements of index[%d,%d]",i,j);
			scanf("%d",&mtrx[i][j]);
           if(i==j){
           	trace+=mtrx[i][j];
		   }		
		}
	}
	
	for(i=0;i<3;i++){

    	for(j=0;j<3;j++){	
		printf("%d ",mtrx[i][j]);
		}
		printf("\n");
	}
	printf("\nTrace of a Matrix = %d",trace);
}
