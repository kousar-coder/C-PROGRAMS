#include <stdio.h>

int main() {
    int i, j, c;

    for (i = 1; i <= 100; i++) {
        c = 0;

        
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                c++;
            }
        }

        if (i % 2 == 0) {
            printf("%d is EVEN", i);
        } else {
            printf("%d is ODD", i);
        }

        if (c == 2) {
            printf(" and PRIME\n");
        } else {
            printf("\n");
        }
    }

    return 0;
}
    
