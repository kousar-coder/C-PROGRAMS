#include<stdio.h>

int maxnum(int n1, int n2); 

int main(){
    int n1, n2, max;
    printf("Enter number1: ");
    scanf("%d", &n1);
    printf("Enter number2: ");
    scanf("%d", &n2);
    
    max = maxnum(n1, n2); 
    printf("Maximum is %d", max);
    return 0;
}

int maxnum(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    else {
        return n2;
    }
}

