#include <stdio.h>

int main() {
    float account_balance, withdrawal_amount;
    char permit;

    printf("Enter your account balance: ");
    scanf("%f", &account_balance);
    
    printf("Enter the amount you want to withdraw: ");
    scanf("%f", &withdrawal_amount);

    if (account_balance >= withdrawal_amount) {

        if (withdrawal_amount > 10000) {
  
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &permit);

  
            if (permit == 'Y' || permit == 'y') {
                printf("Withdrawal approved. Please collect your cash.\n");
            } else {
                printf("Withdrawal denied. Special permit required for amounts over 10,000.\n");
            }
        } else {
      
            printf("Withdrawal approved. Please collect your cash.\n");
        }
    } else {
      
        printf("Insufficient balance. Withdrawal denied.\n");
    }

    return 0;
}
