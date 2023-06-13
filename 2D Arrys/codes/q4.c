#include <stdio.h>

int main() {
    int num_accounts = 0;
    int total_balance = 0;
    int min_validity = -1;
    int id[100];
    int balance[100];
    int validity[100];
    int i;
    while (1) {
        char response;
        printf("Create a new account? (Y/N/E): ");
        scanf(" %c", &response);

        if (response == 'Y') {
            int new_id, new_balance, new_validity;
            printf("Enter ID: ");
            scanf("%d", &new_id);
            printf("Enter initial balance: ");
            scanf("%d", &new_balance);
            printf("Enter validity (in days): ");
            scanf("%d", &new_validity);

            id[num_accounts] = new_id;
            balance[num_accounts] = new_balance;
            validity[num_accounts] = new_validity;
            num_accounts++;
            total_balance += new_balance;
            if (min_validity == -1 || new_validity < min_validity) {
                min_validity = new_validity;
            }
        } else if (response == 'N') {
            printf("I will ask again.\n");
        } else if (response == 'E') {
            break;
        } else {
            printf("Invalid response.\n");
        }
    }

    printf("ID\tBalance\tValidity\n");
    for ( i = 0; i < num_accounts; i++) {
        printf("%d\t%d\t%d\n", id[i], balance[i], validity[i]);
    }
    printf("Total IDs: %d\n", num_accounts);
    printf("Total balance: %d\n", total_balance);
    printf("Minimum validity: %d\n", min_validity);

    return 0;
}

