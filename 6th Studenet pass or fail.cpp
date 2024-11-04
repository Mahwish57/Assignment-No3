#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;

    printf("Enter marks for subject 1: ");
    scanf("%f", &mark1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &mark2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &mark3);

   
    average = (mark1 + mark2 + mark3) / 3;

    if (average < 50) {
        printf("Average: %.2f - Result: Fail\n", average);
    } else if (average > 75) {
        printf("Average: %.2f - Result: Grade A\n", average);
    } else {
        printf("Average: %.2f - Result: Grade B\n", average);
    }

    return 0;
}
