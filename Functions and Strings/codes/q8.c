#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("Both strings are equal.\n");
    } else if (strcmp(str1, str2) > 0) {
        printf("The first string is greater.\n");
    } else {
        printf("The second string is greater.\n");
    }

    return 0;
}

