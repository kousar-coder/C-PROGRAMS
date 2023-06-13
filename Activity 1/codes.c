#include<stdio.h>
int main(){
	
	int f_shirt,c_shirt,jeans,shoes,P_f_shirt,P_c_shirt,P_jeans,P_shoes,D_f_shirt,D_c_shirt,D_jeans,D_shoes;
	int amnt_bfr_disc,disc_amnt,amnt_pay;
	
	printf("Enter no. of formal shirts you bought: ");
	scanf("%d",&f_shirt);
	printf("Enter no. of casual shirts you bought: ");
	scanf("%d",&c_shirt);
	printf("Enter no. of formal shirts you bought: ");
	scanf("%d",&jeans);
	printf("Enter no. of formal shirts you bought: ");
	scanf("%d",&shoes);
	
	printf("Enter price of 1 formal shirt: ");
	scanf("%d",&P_f_shirt);
	printf("Enter price of 1 casual shirt: ");
	scanf("%d",&P_c_shirt);
	printf("Enter price of 1 jean: ");
	scanf("%d",&P_jeans);
	printf("Enter price of 1 shoes: ");
	scanf("%d",&P_shoes);
	
	printf("Enter discount percent on formal shirt");
	scanf("%d",&D_f_shirt);
	printf("Enter discount percent on casual shirt");
	scanf("%d",&D_c_shirt);
	printf("Enter discount percent on jeans");
	scanf("%d",&D_jeans);
	printf("Enter discount percent on shoes");
	scanf("%d",&D_shoes);
	
	amnt_bfr_disc=f_shirt*P_f_shirt+c_shirt*P_c_shirt+jeans*P_jeans+shoes*P_shoes;
    disc_amnt = ((D_f_shirt * f_shirt * P_f_shirt) / 100) + ((D_c_shirt * c_shirt * P_c_shirt) / 100) + ((D_jeans * jeans * P_jeans) / 100) + ((D_shoes * shoes * P_shoes) / 100);
	amnt_pay=amnt_bfr_disc-disc_amnt;
	
	printf("\nAmount before discount=%d",amnt_bfr_disc);
	printf("\nDiscounted amount=%d",disc_amnt);
	printf("\nAmount payable=%d",amnt_pay);
	
}
