//DELETION FROM ARRAY
#include<stdio.h>
int main(){
    int size,a[50],pos,i;

    printf("Enter position from which you want to delete: ");
    scanf("%d",&pos);    
    printf("\nEnter size of an array: ");
    scanf("%d",&size);
    printf("\nEnter an array: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("\nOriginal array: ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    if(pos<=0 || pos>size){
        printf("Invalid position");
    }
    else{
        for(i=pos-1;i<size-1;i++){
            a[i]=a[i+1];
        }
        size--;
        printf("\nUpdated array: ");
        for(i=0; i<size; i++){
            printf("%d ",a[i]);
        }
    }
}

