#include<stdio.h>
#include<math.h>
int main(){
	int i,decimal=0;
	int bits[8];
	
	printf("Enter a binary number of 8-bits: ");
	for(i=0;i<8;i++){
		scanf("%d",&bits[i]);
		decimal+=bits[i]*(pow(2,i));
}
      printf("Decimal number =%d",decimal);

	}
