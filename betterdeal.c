#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        // Calculate final prices after discount:
        // Store 1: marked price = 100, discount = A%
        int price1 = 100 - a;
        
        // Store 2: marked price = 200, discount = B%
        int price2 = 200 - (200 * b) / 100;
        
        // Compare prices and print the cheaper store
        if (price1 < price2) {
            printf("FIRST\n");
        } else if (price2 < price1) {
            printf("SECOND\n");
        } else {
            printf("BOTH\n");
        }
    }
    
    return 0;
}
