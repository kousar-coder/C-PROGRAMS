#include<stdio.h>
int main(){
	int num,fifth,fourth,third,second,first;
	printf("Enter a 5-digit number");
	scanf("%d",&num);
	
	fifth=num/10000;
	num=num%10000;
	fourth=num/1000;
	num=num%1000;
    third=num/100;
	num=num%100;
    second=num/10;
	num=num%10;
    first=num/1;
	num=num%1;
	
	printf("%d",first);
	printf("%d",second);
	printf("%d",third);
	printf("%d",fourth);
	printf("%d",fifth);
}
