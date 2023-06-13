#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char courses[MAX_LENGTH];
    int freq[26] = {0};
    int i, max_freq = 0;

    printf("Enter the courses offered: ");
    scanf("%s", courses);

    for (i = 0; i < strlen(courses); i++) {
        if (courses[i] >= 'a' && courses[i] <= 'z') {
            freq[courses[i] - 'a']++;
        } else if (courses[i] >= 'A' && courses[i] <= 'Z') {
            freq[courses[i] - 'A']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }

    printf("The maximum frequency of a character is: %d\n", max_freq);

    return 0;
}

