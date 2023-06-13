#include<stdio.h>
int main(){
	  int n,first,x,sec,y,third,fourth,a,b,c,d;
	  
	  printf("Enter 4-Digit Number: ");
      scanf("%d",&n);
 
      first=n/1000;  
	  x=n%1000;
 
      sec=x/100;
      y=x%100;
 
      third=y/10;
      fourth=y%10;
 
      printf("\nFirst Digit  = %d \nSecond Digit = %d \nThird Digit  = %d\nLast Digit   = %d\n",first,sec,third,fourth);
      
      if(sec>=5){
      a=(first*2)+1;
	  b=sec-5;	
	  }
	  else{
	  
	  a=first*2;
	  b=sec;
}
      c=third;
      d=fourth;
	printf("\n500Rs notes=%d \n100Rs notes=%d \n10Rs notes=%d \n1Rs notes=%d",a,b,c,d);
}
