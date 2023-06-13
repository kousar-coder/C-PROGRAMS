#include <stdio.h>
int main() {
    int n, i, j, times;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements occurring more than once in the array:\n");
    for(i = 0; i < n; i++) {
        times = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                times++;
            }
        }
        if(times > 1) {
            printf("Element %d occurs %d times at positions: ", arr[i], times);
            for(j = 0; j < n; j++) {
                if(arr[j] == arr[i]) {
                    printf("%d ", j+1);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

