#include <stdio.h>
#include<math.h>
int main() {
    int player1_score = 0, player2_score = 0; 
    int i, j, n;
    
    for (i = 1; i <= 3; i++) { 
        printf("Player 1, enter number %d: ", i);
        scanf("%d", &n);
        
        if (n >= 97 && n <= 122) { 
            player1_score += n;
        } else if (n >= 65 && n <= 90) { 
            player1_score += 2 * n;
        } else { 
            printf("Invalid input. Please enter a valid number.\n");
            i--; 
            continue;
        }
        
        for (j = 1; j < i; j++) { 
            if (n == player1_score / (int)pow(2, j-1)) {
                player1_score /= 2;
                break;
            }
        }
        
        printf("Player 1 score: %d\n", player1_score); 
        
        printf("Player 2, enter number %d: ", i);
        scanf("%d", &n);
        
        if (n >= 97 && n <= 122) { 
            player2_score += n;
        } else if (n >= 65 && n <= 90) { 
            player2_score += 2 * n;
        } else { 
            printf("Invalid input. Please enter a valid number.\n");
            i--; 
            continue;
        }
        
        for (j = 1; j < i; j++) { 
            if (n == player2_score / (int)pow(2, j-1)) {
                player2_score /= 2;
                break;
            }
        }
        
        printf("Player 2 score: %d\n", player2_score); 
    }
    
    if (player1_score > player2_score) { 
        printf("Player 1 wins!\n");
    } else if (player2_score > player1_score) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a tie!\n");
    }
    
    return 0;
}

