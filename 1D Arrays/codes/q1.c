#include<stdio.h>
int main(){
	
	
	int marks[10];
	int i,sum,max,min;
	float avg;
	
	printf("Enter student marks");
	for(i=0;i<10;i++){
		scanf("%d",&marks[i]);
		sum+=marks[i];
	}
	max=min=marks[0];
	for(i=1;i<10;i++){
		if(marks[i]>max)
		max=marks[i];
		if(marks[i]<min)
		min=marks[i];
	}
	for(i=0;i<10;i++){
		printf("\nstudent %d marks=%d",i,marks[i]);
	}
	avg=sum/10;
	printf("\nAverage = %f",avg);
	printf("\nMaximum marks = %d",max);
	printf("\nMinimum marks = %d",min);
}
