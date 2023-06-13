#include <stdio.h>

int main() {
    int series[10] = {2, 3}; 
    int i;
    
    for (i = 2; i < 10; i++) { 
        series[i] = series[i-1] + series[i-2];
    }
    
    
    printf("Series: ");
    for (i = 0; i < 10; i++) {
        printf("%d, ", series[i]);
    }
    printf("\n");
    
    return 0;
}

