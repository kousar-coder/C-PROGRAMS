#include<stdio.h>
int main(){
	int r,c,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&r);
     printf("Enter no. of columns:");
    scanf("%d",&c);
    
    int arr1[r][c],arr2[r][c];
    
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    		printf("Enter elements of index[%d,%d]",i,j);
			scanf("%d",&arr1[i][j]);
           		
		}
	}
	
	for(i=0;i<r;i++){
    for(j=0;j<c;j++){	
		printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	 for (i = r - 1; i >= 0; i--) {
     for (j = c - 1; j >= 0; j--) {
            arr2[r - i - 1][c - j - 1] = arr1[i][j];
        }
    }

	
	printf("\nReversed array\n");
	for(i=0;i<r;i++){
    for(j=0;j<c;j++){	
		printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}

}
