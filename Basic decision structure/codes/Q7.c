#include<stdio.h>
#include<math.h>
int main(){
   float c,add,sub,div,mul,mod,sqr,sqr_root,cube_root,exp,logarithm,sine,cosine,tangent,absolute;
   int a,b,choice;
   double n;
  
   printf("Enter your choice of operation \n1.ADDITION \n2.SUBTRACTION \n3.DIVISION \n4.MULTIPLICATION \n5.MODULO \n6.SQUARE \n7.SQUARE ROOT \n8.CUBE ROOT \n9.EXPONENT \n10.LOGARITHM \n11.SINUSOIDAL \n12.CO-SINUSOIDAL \n13.TANGENT \n14.ABSOLUTE VALUE ");	
   scanf("%d",&choice);
   
   if(choice==1||choice==2||choice==3||choice==4||choice==5||choice==9){
       printf("Enter values of 'a' and 'b'");
       scanf("%d%d",&a,&b);
   
   switch(choice){
   	
   	case 1:
   		add=a+b;
   		printf("Result = %d",add);
   		break;
   	case 2:
   		sub=a-b;
   		printf("Result = %d",sub);
   		break;
	case 3:
   		div=a/b;
   		printf("Result = %d",div);
   		break;   	
   	case 4:
   		mul=a*b;
   		printf("Result = %d",mul);
   		break;
	case 5:
   		mod=a%b;
   		printf("Result = %d",mod);
   		break;
	case 9:
  	    exp=pow(a,b);
  	    printf("Result = %d",exp);
  	    break;	   	   	
   	default:
   		printf("invalid choice!");
   }
}

else
if(choice==6||choice==7||choice==8||choice==10)
  {
    printf("Enter a number: ");
   scanf("%f",&c);
   
switch(choice){
    case 6:
  	    sqr=c*c;
  	    printf("Result = %f",sqr);
  	    break;
    case 7:
   	    sqr_root=sqrt(c);
  	    printf("Result = %f",sqr_root);
  	    break;
  	case 8:
  	    cube_root=c*c*c;
  	    printf("Result = %f",cube_root);
  	    break;    
    case 10:
  	    logarithm=log(c);
  	    printf("Result = %f",log);
  	    break;
  	
  	
  	default:
	  printf("invalid choice!");    
  
  
  } 
}

else
if(choice==11||choice==12||choice==13||choice==14){
	
	printf("Enter a number: ");
	scanf("%lf",&n);
	
	switch(choice){
	case 11:
  	    sine=sin(n);
  	    printf("Result = %lf",sine);
  	    break;
  	case 12:
  	    cosine=cos(n);
  	    printf("Result = %lf",cosine);
  	    break;
  	case 13:
  	    tangent=tan(n);
  	    printf("Result = %lf",tan);
  	    break;
  	case 14:
  	    absolute=fabs(n);
  	    printf("Result = %lf",absolute);
  	    break;   
  	default:
	  printf("invalid choice!"); 	
		
	}
}
else
printf("invalid choice!");
  
}
