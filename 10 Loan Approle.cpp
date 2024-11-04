#include <stdio.h>

int main() {
    float monthlyIncome;
    char hasExistingLoan;
    char hasOverduePayments;

    printf("Enter your monthly income: ");
    scanf("%f", &monthlyIncome);

    if (monthlyIncome > 30000) {
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &hasExistingLoan);  

        if (hasExistingLoan == 'Y' || hasExistingLoan == 'y') {
        
            printf("Do you have any overdue payments? (Y/N): ");
            scanf(" %c", &hasOverduePayments);

            if (hasOverduePayments == 'N' || hasOverduePayments == 'n') {
                printf("You are eligible for the loan.\n");
            } else {
                printf("You are not eligible for the loan due to overdue payments.\n");
            }
        } else {
           
            printf("You are eligible for the loan.\n");
        }
    } else {
        
        printf("You are not eligible for the loan due to insufficient income.\n");
    }

    return 0;
}
