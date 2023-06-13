#include <stdio.h>

int main() {
    int n, i, min, max_diff, diff;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    min = arr[0];
    max_diff = 0;
    
    for (i = 1; i < n; i++) {
        diff = arr[i] - min;
        if (diff > max_diff) {
            max_diff = diff;
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("The maximum difference is %d", max_diff);
    
    return 0;
}

