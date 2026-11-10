#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Option 1: 5 packets of 2 (0 packets of 4)
        int cost1 = 5 * x;
        
        // Option 2: 1 packet of 4 and 3 packets of 2
        int cost2 = y + 3 * x;
        
        // Option 3: 2 packets of 4 and 1 packet of 2
        int cost3 = 2 * y + x;
        
        // Find the minimum of the three costs
        int min_cost = cost1;
        if (cost2 < min_cost) {
            min_cost = cost2;
        }
        if (cost3 < min_cost) {
            min_cost = cost3;
        }
        
        printf("%d\n", min_cost);
    }
    
    return 0;
}
