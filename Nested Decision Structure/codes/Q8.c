#include<stdio.h>
int main(){
	int rating,year,edu_level;
	
	printf("Enter your performance Rating \n.1 for 'Outstanding' \n.2 for 'Very good' \n.3 for 'Good' \n.4 for'Average' \n.5 for 'Below Average'");
    scanf("%d",&rating);
    
	printf("Does your Years of service are '5' \n[1.Yes/2.No]");
    scanf("%d",&year);
    
    printf("Does your Education level is 'Masters' \n[1.Yes/2.No]");
    scanf("%d",&edu_level);
    
    if(year==1 && edu_level==1){
    	if(rating==1){
    		printf("\n15%(performance) + 2%(years of service) + 1%(Education) = 18%");
		}
		else if(rating==2){
    		printf("\n10%(performance) + 2%(years of service) + 1%(Education) = 13%");
		}
		else if(rating==3){
    		printf("\n5%(performance) + 2%(years of service) + 1%(Education) = 8%");
		}
		else if(rating==4){
    		printf("\n2.5%(performance) + 2%(years of service) + 1%(Education) = 5.5%");
		}
		else{
			printf("\n1%(performance) + 2%(years of service) + 1%(Education) = 4%");
		}
	}
	else{
		if(rating==1){
    		printf("\n15%(performance) + 0%(years of service) + 0%(Education) = 15%");
		}
		else if(rating==2){
    		printf("\n10%(performance) + 0%(years of service) + 0%(Education) = 10%");
		}
		else if(rating==3){
    		printf("\n5%(performance) + 0%(years of service) + 0%(Education) = 5%");
		}
		else if(rating==4){
    		printf("\n2.5%(performance) + 0%(years of service) + 0%(Education) = 2.5%");
		}
		else{
			printf("\n1%(performance) + 0%(years of service) + 0%(Education) = 1%");
		}
	}	
	
}
