#include <stdio.h>
#define SPECIAL_CHARACTERS "!@#$%^&*"

int main()
{
    char pin[5], resetCode[7], input[7];
    int option, attempts = 0, i, j, Lower, Upper, Digit, Special, random = 0;

    while (1) {
        printf("Welcome to ATM\n");
        printf("1. Login\n");
        printf("2. Reset Password\n");
        printf("3. Close Application\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                while (attempts < 3) {
                    Lower = Upper = Digit = Special = 0;
                    printf("Enter your PIN code: ");
                    scanf("%s", input);
                    for (i = 0; input[i] != '\0' && i < 4; i++) {
                        char ch = input[i];
                        if (ch >= 'a' && ch <= 'z') {
                            Lower = 1;
                        } else if (ch >= 'A' && ch <= 'Z') {
                            Upper = 1;
                        } else if (ch >= '0' && ch <= '9') {
                            Digit = 1;
                        } else if (strchr(SPECIAL_CHARACTERS, ch) != NULL) {
                            Special = 1;
                        }
                    }
                    if (i != 4 || !(Lower && Upper && Digit && Special)) {
                        printf("Invalid PIN code\n");
                        attempts++;
                    } else {
                        printf("Login successful!\n");
                        break;
                    }
                }
                if (attempts == 3) {
                    printf("Maximum login attempts reached. Account blocked.\n");
                }
                break;
            case 2:
                printf("Generating reset code...\n");
                random = (random + 1) * 1103515245 + 12345;
                for (i = 0; i < 6; i++) {
                    resetCode[i] = '0' + ((random >> 16) & 0x7FFF) % 10;
                    random = (random + 1) * 1103515245 + 12345;
                }
                resetCode[i] = '\0';
                printf("Reset code: %s\n", resetCode);
                printf("Enter reset code to proceed: ");
                scanf("%s", input);
                for (i = 0, j = 0; input[i] != '\0' && j < 6; i++) {
                    if (input[i] >= '0' && input[i] <= '9') {
                        if (input[i] == resetCode[j]) {
                            j++;
                        } else {
                            break;
                        }
                    }
                }
                if (j == 6 && input[i] == '\0') {
                    printf("Reset password successful!\n");
                } else {
                    printf("Invalid reset code. Reset password failed.\n");
                }
                break;
            case 3:
                printf("Closing application...\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}

