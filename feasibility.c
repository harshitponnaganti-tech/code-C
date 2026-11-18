#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        long long x, y;
        scanf("%lld %lld", &x, &y);
        
        // Total expense for 30 days is y * 30
        if (x >= y * 30) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
