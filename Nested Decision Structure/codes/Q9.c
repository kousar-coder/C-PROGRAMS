#include<stdio.h>
int main(){
    int wheather,plane_action;
	
	printf("Enter wheather conditions \n.1 for 'GOOD' \n.2 for 'BAD'");
	scanf("%d",&wheather);
	
	printf("Enter plane action \n.1 for 'Take off' \n.2 for 'land'");
	scanf("%d",&plane_action);
	
	
	if(wheather==1){
		if(plane_action==1){
			printf("Result:The take of is allowed");
		}
		else{
			printf("Result:The landing is allowed");
		}
	
	}	
	else{
		if(plane_action==1){
			printf("Result:The take off is not allowed due to bad wheather");
		}
		else{
			printf("Result:The landing is allowed");
		}
	}
	
}
