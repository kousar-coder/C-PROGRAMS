#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Enter the total number of characters in your first name and last name: ");
    scanf("%d", &N);

    char *DynamicArray = (char*)malloc((N+1) * sizeof(char)); 
    if (DynamicArray == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter your full name: ");
    scanf("%s", DynamicArray);

    printf("Your name is: %s\n", DynamicArray);
    free(DynamicArray);

    return 0;
}

