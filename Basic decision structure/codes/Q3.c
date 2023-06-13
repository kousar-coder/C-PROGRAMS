#include <stdio.h>
int main (){
	int day,Rs;
	printf("Enter day[Monday==>1,Tuesday & Wednesday==>2,Thrusday & Friday==>3,Weekends==>4]");
	scanf("%d",&day);
	printf("Enter your range in Rupees");
	scanf("%d",&Rs);
	switch(day){
		case 1:
			if(Rs>=15 && Rs<=50)
			printf("Deal 01");
			else if(Rs>=51 && Rs<=100)
			printf("Deal 01 and Deal 02");
			else
			printf("Deal 01,Deal 02,Deal 03 + complementary sweets");
			break;
		case 2:
			if(Rs>=15 && Rs<=50)
			printf("Deal 01");
			else if(Rs>=51 && Rs<=100)
			printf("Deal 01 and Deal 04");
			else
			printf("Deal 01,Deal 04,Deal 05 + complementary shake");
			break;
		case 3:
			if(Rs>=15 && Rs<=50)
			printf("Deal 01");
			else if(Rs>=51 && Rs<=100)
			printf("Deal 01 and Deal 06");
			else
			printf("Deal 01,Deal 06,Deal 07 + complementary Falooda");
			break;		
		case 4:
			if(Rs>=15 && Rs<=50)
			printf("Deal 01 + complementary soup");
			else if(Rs==150)
			printf("Buffet");
			else
			printf("Sorry ! come again");
			break;	
		default:
		printf("Enter correct choice");	
	}

}

