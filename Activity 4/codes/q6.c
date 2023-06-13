#include<stdio.h>
int main(){
	int ind_amnt[4],food[5];
	int Tic_RS,n,Total_amnt=0,remain,i,j;
	
	printf("\n1 ticket price?");
	scanf("%d",&Tic_RS);
	
	printf("\nHow many people to contribute");
	scanf("%d",&n);
	
	printf("Enter each person contribution");
	for(i=0;i<n;i++){
		scanf("%d",&ind_amnt[i]);
		Total_amnt+=ind_amnt[i];
	}
	remain=Total_amnt-Tic_RS*n;
	printf("\nOne ticket price = %d",Tic_RS);
	printf("\nContribution:\n Ali=%d \n Kiran=%d \nAlex=%d \nSara=%d",ind_amnt[0],ind_amnt[1],ind_amnt[2],ind_amnt[3]);
	printf("\nThey have total %d combined amount",Total_amnt);
	printf("\nThey have payed %d amount for tickets",Tic_RS*n);
	printf("\nRmemaining amount=%d",remain);
	printf("FOOD options: \nChips = 50 \nColdDrink = 60 \nPop-corn = 100 \nIceCream = 90 \nBurger = 300");
	printf("\nEnter food items price");
	for(i=0;i<5;i++){
		scanf("%d",&food[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(j==i){
				continue;
			}
			else{if (food[i] + food[j] <= remain) {
                printf("\nYou have possibility to buy items of price %d %d", food[i], food[j]);
				}
			}
		}
	}
	
}
