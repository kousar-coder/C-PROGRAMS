#include<stdio.h>
int main(){
	int a,b,res,ans,correct,wrong,i;
	
	printf("Enter two numbers which you want to multilply \nRANGE=(1-10)");
	

	
	for(i=1;i<=45;i++){
		printf("\nEnter value of 'a' and 'b'");
		scanf("%d %d",&a,&b);
		if(a>0 && b>0){
			res=a*b;
		}
		else{
			break;
		}
		printf("\nEnter your answer:");
		scanf("%d",&ans);
		if(ans==res){
			correct++;
		}
		else{
			wrong++;
		}
	}
	printf("\nCORRECT = %d \nWRONG = %d",correct,wrong);
}
