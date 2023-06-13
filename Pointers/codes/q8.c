#include <stdio.h>
#include <ctype.h>

int WordCount(char *Text, int *size);

int main() {
    char Text[100];
    int size;

    printf("Enter a string: ");
    scanf("%[^\n]", Text);
    size = strlen(Text);

    int count = WordCount(Text, &size);
    printf("Word count: %d\n", count);

    return 0;
}

int WordCount(char *Text, int *size) {
    int count = 0;
    int i = 0;

    while (i < *size) {
        
        while (i < *size && isspace(Text[i])) {
            i++;
        }

       
        if (i < *size && !isspace(Text[i])) {
            count++;
            while (i < *size && !isspace(Text[i])) {
                i++;
            }
        }
    }

    return count;
}

