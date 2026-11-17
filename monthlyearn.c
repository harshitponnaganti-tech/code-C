#include <stdio.h>

int main() {
    int S, B, R;
    // Read the base salary, bonus per rating, and number of ratings
    if (scanf("%d %d %d", &S, &B, &R) == 3) {
        // Calculate total earnings: Base Salary + (Bonus * Ratings)
        int total_earnings = S + (B * R);
        printf("%d\n", total_earnings);
    }
    return 0;
}
