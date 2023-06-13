#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    char studentId[8];
    printf("Enter your student ID: ");
    scanf("%s", studentId);

    int newSize = strlen(DynamicArray) + strlen(studentId) + 1;  
    DynamicArray = (char*)realloc(DynamicArray, newSize * sizeof(char));
    if (DynamicArray == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    strcat(DynamicArray, " "); 
    strcat(DynamicArray, studentId);

    printf("Your name with student ID is: %s\n", DynamicArray);
    free(DynamicArray);

    return 0;
}

