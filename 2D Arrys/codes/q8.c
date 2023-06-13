#include<stdio.h>
int main(){
    int mtrx[3][3],i,j;
    int row1,row2,temp=0;
    
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("Enter elements of index[%d,%d]",i,j);
			scanf("%d",&mtrx[i][j]);
		}
	}
	
	for(i=0;i<3;i++){

    	for(j=0;j<3;j++){	
		printf("%d ",mtrx[i][j]);
		}
		printf("\n");
	}
	printf("Enter the row number which you want to swap");
	scanf("%d %d",&row1,&row2);
	
	for(i=0;i<3;i++){
		temp=mtrx[row1][j];
		mtrx[row1][j]=mtrx[row2][j];
		mtrx[row2][j]=temp;
	}
	
	printf("\nUPDATED MATRIX:\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){	
		printf("%d ",mtrx[i][j]);
		}
		printf("\n");
	}
	
}
