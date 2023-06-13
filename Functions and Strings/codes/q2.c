#include <stdio.h>

void countfrequency(int arr1[], int n);

int main() {
    int i, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr1[n];

    if (n > 0 && n <= 10) {
        printf("\nEnter an array:\n");
        for (i = 0; i < n; i++) {
            scanf("%d", &arr1[i]);
        }

        countfrequency(arr1, n);
    } else {
        printf("Enter a valid size\n");
    }

    return 0;
}

void countfrequency(int arr1[], int n) {
    int freq[20] = {0};
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr1[i] == arr1[j]) {
                freq[i]++;
                freq[j] = 0;
            }
        }
    }

    printf("\nFrequencies are:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("Frequency of %d is %d\n", arr1[i], freq[i] + 1);
        }
    }
}

