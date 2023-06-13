//INSERTION IN ARRAY
#include<stdio.h>
int main(){
int a[50],i,pos,size,num;	

printf("Enter number which you want to insert: ");
scanf("%d",&num);
printf("\nEnter position");
scanf("%d",&pos);
printf("\nEnter size of an array:");
scanf("%d",&size);
printf("\nEnter an array:");
for(i=0;i<size;i++){
	scanf("%d",&a[i]);
}
printf("\nOriginal array:");
for(i=0;i<size;i++){
	printf("%d ",a[i]);
}
if(pos<=0 || pos>size+1){
	printf("\nInavlid position");
}
else{
	for(i=size-1;i>=pos-1;i--){
	a[i+1]=a[i];
}
a[pos-1]=num;
size++;
printf("\nUpdated array:");
for(i=0;i<size;i++){
	printf("%d ",a[i]);
}
}
}
