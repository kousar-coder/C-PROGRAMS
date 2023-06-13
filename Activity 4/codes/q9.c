#include <stdio.h>

int main() {
    char input_char;
    int input_num;
    int alpha = 0, num = 0;
    
    while (!alpha && !num) {
        printf("Please enter a character: ");
        scanf(" %c", &input_char);
        if ((input_char >= 'a' && input_char <= 'z') || (input_char >= 'A' && input_char <= 'Z')) {
            alpha = 1;
        } else if (input_char >= '0' && input_char <= '9') {
            num = 1;
        }
    }
    
    if (alpha) {
        printf("You entered an alphabet: %c\n", input_char);
    } else {
        input_num = input_char - '0';
        printf("You entered a number: %d\n", input_num);
    }
    
    return 0;
}

