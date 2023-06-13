#include<stdio.h>
int main(){
	float a,b,result;
	int choice;
	
	
	printf("Enter values of 'a' and 'b'");
	scanf("%f %f",&a,&b);
	
	printf("Enter your choice of operation \n.1 for '+'\n.2 for '-'\n.3 for '/'\n.4 for '*' : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		
		case 1:
			result=a+b;
			printf("Result=%f",result);
		break;	
		case 2:
			result=a-b;
			printf("Result=%f",result);
		break;
		case 3:
		    result=a/b;
			printf("Result=%f",result);
		break;
		case 4:
			result=a*b;
			printf("Result=%f",result);
		break;
		deafult:
		printf("Enter valid choice!");	
				
	}
	
}
