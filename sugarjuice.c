#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        // Total income from N glasses (each costs 50 coins) = 50 * N
        // Expenses total 20% + 20% + 30% = 70% of total income
        // Profit = Total Income - Expenses = 30% of Total Income
        // Profit = (50 * N) * 30 / 100 = 15 * N
        
        int profit = 15 * n;
        printf("%d\n", profit);
    }
    
    return 0;
}
