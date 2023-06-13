#include<stdio.h>
int main(){
	int N_stu,marks,i,j,sum;
	float avg;
	printf("\nHow many students would you like to grade?");
	scanf("%d",&N_stu);
	
	for(i=1;i<=N_stu;i++){
		printf("\nEnter marks for student %d in 5 subjects",i);
		for(j=1;j<=5;j++){
			scanf("%d",&marks);
			sum=sum+marks;
		}
		avg=sum/5;
		printf("\nThe average grade for student %d is %f",i,avg);
	}
}
