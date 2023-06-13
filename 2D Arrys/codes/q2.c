#include <stdio.h>

int main() {
    int N, M;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Enter the value of M: ");
    scanf("%d", &M);

    int arr[N][M];
    int count[N*M];
    int i,j;
    // initialize the count array with all 0s
    for ( i = 0; i < N*M; i++) {
        count[i] = 0;
    }

    // input the elements of the array
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < M; j++) {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
            count[arr[i][j]]++;
        }
    }

    // print the elements occurring more than once
    printf("Elements occurring more than once:\n");
    for ( i = 0; i < N*M; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

