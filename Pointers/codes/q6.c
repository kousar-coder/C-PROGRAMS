#include <stdio.h>
#include <ctype.h>

void SentenceCase(char *Text, int *size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    char Text[size+1];  
    printf("Enter %d characters: ", size);
    scanf("%s", Text);

    SentenceCase(Text, &size);

    printf("Sentence Case: %s\n", Text);
    return 0;
}

void SentenceCase(char *Text, int *size) {
    int i;

	if (*size > 0) {
        Text[0] = toupper(Text[0]); 
    }

    for (i = 1; i < *size; i++) {
        if (Text[i-1] == '.' || Text[i-1] == '?' || Text[i-1] == '!') {
            
            Text[i] = toupper(Text[i]);
        } else {
           
            Text[i] = tolower(Text[i]);
        }
    }
}

