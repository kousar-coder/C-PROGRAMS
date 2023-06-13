#include <stdio.h>
int main (){
	int years;
	float salary,incre,new_salary;
	
printf("Enter years of services");
scanf("%d",&years);
printf("Enter your salary");
scanf("%f",&salary);

if(years==3 && salary>=40000)
{
	incre=(2/100)*salary;
	new_salary=salary+incre;
	printf("Your inremented salary is %f",new_salary);
}
else
if(years==3 && salary>=20000 && salary<40000)
{
	incre=(2.5/100)*salary;
	new_salary=salary+incre;
	printf("Your inremented salary is %f",new_salary);
}
else
if(years==3 && salary>=15000 && salary<20000)
{
	incre=(4.0/100)*salary;
	new_salary=salary+incre;
	printf("Your inremented salary is %f",new_salary);
}
else
if(years==3 && salary>=10000 && salary<15000)
{
	incre=(7.0/100)*salary;
	new_salary=salary+incre;
	printf("Your inremented salary is %f",new_salary);
}
else
printf("invalid choice!");
}

