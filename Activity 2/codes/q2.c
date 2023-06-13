#include <stdio.h>
int main()
{
 int n,first,x,sec,y,third,fourth,sum;
 
      printf("Enter 4-Digit Number: ");
      scanf("%d",&n);
 
      first=n/1000;  
      x=n%1000;
 
      sec=x/100;
      y=x%100;
 
      third=y/10;
      fourth=y%10;
 
      printf("\nFirst Digit  = %d \nSecond Digit = %d \nThird Digit  = %d\nLast Digit   = %d\n",first,sec,third,fourth);
 
      sum=first+sec+third+fourth;
      printf("\nSum of All 4-Digits : %d",sum);
      return 0;
}



