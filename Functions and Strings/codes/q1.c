#include<stdio.h>

char position(int,int);
int main(){
	char final_position[50];
	int marks,exp;
	printf("Enter marks of test: ");
	scanf("%d",&marks);
	
	printf("Enter years of experience: ");
	scanf("%d",&exp);
	
if(position(marks,exp)=='c'){
	printf("\nYou are qualified for Trainee Engineer position ");
}
else if(position(marks,exp)=='b'){
	printf("\nYou are qualified for Assistant Developer position ");
}
else 	
{
	printf("\nYou are qualified for Associate Developer position ");
}
	
}

char position(marks,exp){
	
	char a="Associate Developer";
	char b="Assistant Developer";
	char c="Trainee Engineer";
	
	
	
	if(marks==50){
		return 'c';
	}
	if(marks>=60 && exp>=1){
		return 'b';
	}
	
	if(marks>=70 && exp>=2){
		return 'a';
	}
}
