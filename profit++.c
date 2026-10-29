#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Buying price remains the same: x - y
        // New selling price is increased by 10%, which is x + (x / 10)
        // New profit = New selling price - Buying price
        // = (x + x / 10) - (x - y) = y + x / 10
        int new_profit = y + (x / 10);
        
        printf("%d\n", new_profit);
    }
    
    return 0;
}
