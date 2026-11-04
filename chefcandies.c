#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        
        // If Chef already has enough candies, he needs 0 packets
        if (x >= n) {
            printf("0\n");
        } else {
            // Calculate remaining candies needed and divide by 4 (rounding up)
            int remaining = n - x;
            int packets = (remaining + 3) / 4;
            printf("%d\n", packets);
        }
    }
    
    return 0;
}
