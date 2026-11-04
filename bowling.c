#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        
        int count = 0;
        for (int i = 0; i < n; i++) {
            int weight;
            scanf("%d", &weight);
            
            // Check if the bowling ball weight falls within the range [X, Y]
            if (weight >= x && weight <= y) {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
