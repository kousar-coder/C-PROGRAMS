#include <stdio.h>
int main (){
float units,bill;
   printf("Enter no of units consumed: ");
   scanf("%f",&units);

if("units>=1 && units<=100")
{
	bill=units*5.25;
	printf("Your bill is %f",bill);
}
else 

if("units>=101 && units<=200")
{
	bill=units*7.75;
	printf("Your bill is %f",bill);
}	

else

	if("units>=201 && units<=300")
{
	bill=units*8.92;
	printf("Your bill is %f",bill);
}

else
	if("units>=301 && units<=400")
{
	bill=units*11.55;
	printf("Your bill is %f",bill);
}

else

	bill=units*12.71;
	printf("Your bill is %f",bill);


}

