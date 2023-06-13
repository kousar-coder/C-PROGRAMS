#include <stdio.h>

int smallest(int arr[], int n);
int largest(int arr[], int n);
float average(int arr[], int n);

int main() {
    int n, i, small, large;
    float avg;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    small = smallest(arr, n);
    large = largest(arr, n);
    avg = average(arr, n);
    
    printf("\nThe largest element is %d", large);
    printf("\nThe smallest element is %d", small);
    printf("\nThe average element is %f", avg);
    
    return 0;
}

int smallest(int arr[], int n) {
    int min, i;
    min = arr[0];
    
    for (i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    return min;
}

int largest(int arr[], int n) {
    int max, i;
    max = arr[0];
    
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

float average(int arr[], int n) {
    int sum = 0, i;
    float avg;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    avg = (float) sum / n;
    return avg;
}

