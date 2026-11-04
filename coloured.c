#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        long long total_cost = 0;
        for (int i = 1; i <= n; i++) {
            long long a;
            scanf("%lld", &a);
            // Cost of the i-th colour balloon is i, and we bought 'a' balloons of this colour
            total_cost += a * i;
        }
        
        printf("%lld\n", total_cost);
    }
    
    return 0;
}
