#include <stdio.h>

int main() {
    int matchsticks = 21;
    int player_choice, computer_choice;
    
    printf("Welcome to the matchstick game!\n");

    while (matchsticks > 0) {
        // Player
        while (player_choice < 1 || player_choice > 4 || player_choice > matchsticks) {
            printf("Pick 1, 2, 3, or 4 matchsticks: ");
            scanf("%d", &player_choice);
        } 
        
        matchsticks -= player_choice;
        printf("Player picked %d matchstick(s). %d matchstick(s) left in the pile.\n", player_choice, matchsticks);
        
        if (matchsticks == 0) {
            printf("Player lost the game.\n");
            break;
        }
        
        // Computer
        computer_choice = 5 - player_choice;
        if (matchsticks <= 4) {
            computer_choice = matchsticks;
        }
        
        matchsticks -= computer_choice;
        printf("Computer picked %d matchstick(s). %d matchstick(s) left in the pile.\n", computer_choice, matchsticks);
        
        if (matchsticks == 0) {
            printf("Computer lost the game.\n");
            break;
        }
    }
    
    return 0;
}

