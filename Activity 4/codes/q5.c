#include<stdio.h>
int main(){
	printf(">>>>>>>YOUR INPUT FORMAT SHOULD BE \n1.Formal Shirt \n2.Casual Shirt \n3.Jeans \n4.Shoes>>>>>>");
	int i,amnt_bfr_disc;
	float  disc_amnt,amnt_pay;
	
	int N_items[5];
	int P_items[5];
	int disc_items[5];
	
	printf("\nEnter qauntity of each item");
	for(i=0;i<4;i++){
		scanf("%d",&N_items[i]);
	}
	
	printf("\nEnter Price of each item");
	for(i=0;i<4;i++){
		scanf("%d",&P_items[i]);
	}
    
	printf("\nEnter Discount percent of each item");
	for(i=0;i<4;i++){
		scanf("%d",&disc_items[i]);
	}

	amnt_bfr_disc=N_items[0]*P_items[0]+N_items[1]*P_items[1]+N_items[2]*P_items[2]+N_items[3]*P_items[3];
	disc_amnt = ((disc_items[0] * N_items[0] * P_items[0]) / 100) + ((disc_items[1] * N_items[1] * P_items[1]) / 100) + ((disc_items[2] * N_items[2] * P_items[2]) / 100) + ((disc_items[3] * N_items[3] * P_items[3]) / 100);
	amnt_pay=amnt_bfr_disc-disc_amnt;

    if(amnt_bfr_disc>5000){
    	printf("Your shopping price is more than 5000");
	}   
    printf("\nTotal price before discount = %d",amnt_bfr_disc);
	printf("\nDiscounted Amount=%f",disc_amnt);
    printf("\nAmount Payable = %f",amnt_pay);
   
}
