#include <stdio.h>

int main() {
    float purchase_amount, final_amount;
    char is_member;

    printf("Enter the purchase amount: ");
    scanf("%f", &purchase_amount);
   
    if (purchase_amount > 2000) {

        printf("Are you a member? (Y/N): ");
        scanf(" %c", &is_member);


        if (is_member == 'Y' || is_member == 'y') {
            final_amount = purchase_amount * 0.80;  
        } else {
            final_amount = purchase_amount * 0.90;   
        }
    } else {

        final_amount = purchase_amount;
    }

    printf("The final amount after discount is: %.2f\n", final_amount);

    return 0;
}
