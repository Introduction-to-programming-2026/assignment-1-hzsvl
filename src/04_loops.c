#include <stdio.h>

int main(void) {
    int n = 0;
    int sum = 0;
    unsigned long long fact = 1;

    // Keep asking until n > 0
    while (n <= 0) {
        printf("Enter a positive integer n (> 0): ");
        scanf("%d", &n);
    }

    printf("\n=== Counting ===\n");

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    printf("\n=== Sum 1..n ===\n");

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    printf("\n=== Factorial n! ===\n");

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %llu\n", fact);

    return 0;
}