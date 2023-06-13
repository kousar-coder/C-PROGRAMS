#include<stdio.h>

int main() {
    int N, i;
    int arr[50];

    printf("Enter array size: ");
    scanf("%d", &N);

    printf("Enter the array: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < N; i++) {
        int prev = (i == 0) ? arr[i] : arr[i - 1]; // If the element is first in the array, use the same value
        int next = (i == N - 1) ? arr[i] : arr[i + 1]; // If the element is last in the array, use the same value
        arr[i] = prev * next;
    }

    printf("\nUpdated Array: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

