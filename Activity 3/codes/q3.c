#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(){
	float rad,vol,circum;
	
	printf("Enter radius of circle: ");
	scanf("%f",&rad);
	
	vol=(4*pi*(pow(rad,3)))/3;
	circum=2*pi*rad;
	
	printf("\nVolume of sphere =%f",vol);
	printf("\nCircumference of a circle =%f",circum);
	
    	
	
}
