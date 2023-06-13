#include<stdio.h>
int main(){
	int a,b;
	printf("Enter values of 'a' and 'b'");
	scanf("%d%d",&a,&b);
	
	printf("Initialy \na=%d  b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swapping \na=%d   b=%d",a,b);
	
}
