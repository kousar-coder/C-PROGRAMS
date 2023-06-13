#include<stdio.h>
int main(){
	int mon,tues,wed,thurs,fri,sat,sun,sum;
	float avg;
	printf("\nEnter temperature between -100 and 200 degrees fahrenheit");
	printf("\nEnter temperature of Monday");
	scanf("%d",&mon);
	
	printf("\nEnter temperature of Tuesday");
	scanf("%d",&tues);
	
	printf("\nEnter temperature of Wednesday");
	scanf("%d",&wed);
	
	printf("\nEnter temperature of Thursay");
	scanf("%d",&thurs);
	
	printf("\nEnter temperature of Friday");
	scanf("%d",&fri);
	
	printf("\nEnter temperature of Satday");
	scanf("%d",&sat);
	
	printf("\nEnter temperature of sunday");
	scanf("%d",&sun);
	
	sum=mon+tues+wed+thurs+fri+sat+sun;
	avg=sum/7;
	
	if(mon>tues && mon>wed && mon>thurs && mon>fri && mon>sat && mon>sun){
		printf("\nThe highest temperature of the week =%d",mon);
	}
	else if(tues>mon && tues>wed && tues>thurs && tues>fri && tues>sat && tues>sun){
		printf("\nThe highest temperature of the week =%d",tues);
	}
	
		else if(wed>mon && tues<wed && wed>thurs && wed>fri && wed>sat && wed>sun){
		printf("\nThe highest temperature of the week =%d",wed);
	}
		else if(thurs>mon && tues<thurs && thurs>wed  && thurs>fri && thurs>sat && thurs>sun){
		printf("\nThe highest temperature of the week =%d",thurs);
	}
		else if(tues>mon && fri>tues && fri>wed && fri>thurs  && fri>sat && fri>sun){
		printf("\nThe highest temperature of the week =%d",fri);
	}
		else if(sat>mon && sat>tues && sat>wed && sat>thurs && sat>fri  && sat>sun){
		printf("\nThe highest temperature of the week =%d",sat);
	}
		else if(sun>mon && sun>tues && sun>wed && sun>thurs && sun>fri && sun>sat){
		printf("\nThe highest temperature of the week =%d",sun);
	}
	else{
		printf("\nEnter valid temperature");
	}
	 if(mon<tues && mon<wed && mon<thurs && mon<fri && mon<sat && mon<sun){
		printf("\nThe lowest temperature of the week =%d",mon);
	}
	    else if(tues<mon && tues<wed && tues<thurs && tues<fri && tues<sat && tues<sun){
		printf("\nThe lowest temperature of the week =%d",tues);
	}
	
		else if(wed<mon && tues>wed && wed<thurs && wed<fri && wed<sat && wed<sun){
		printf("\nThe lowest temperature of the week =%d",wed);
	}
		else if(thurs<mon && tues>thurs && thurs<wed  && thurs<fri && thurs<sat && thurs<sun){
		printf("\nThe lowest temperature of the week =%d",thurs);
	}
		else if(tues<mon && fri<tues && fri<wed && fri<thurs  && fri<sat && fri<sun){
		printf("\nThe lowest temperature of the week =%d",fri);
	}
		else if(sat<mon && sat<tues && sat<wed && sat<thurs && sat<fri  && sat<sun){
		printf("\nThe lowest temperature of the week =%d",sat);
	}
		else if(sun<mon && sun<tues && sun<wed && sun<thurs && sun<fri && sun<sat){
		printf("\nThe lowest temperature of the week =%d",sun);
	}
	else{
		printf("\nEnter valid temperature");
	}
	printf("\nThe average temperature of the week is %f",avg);
	
	
	
	
	
	
}
