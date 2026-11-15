#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    
    while (T--) {
        long long P, D, K, B;
        scanf("%lld %lld %lld %lld", &P, &D, &K, &B);
        
        long long final_cost = P + (D * K);
        
        if (final_cost <= B) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
