#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\n=== Results ===\n");

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    if (number >= 1 && number <= 100) {
        printf("The number is between 1 and 100.\n");
    } else {
        printf("The number is NOT between 1 and 100.\n");
    }

    return 0;
}