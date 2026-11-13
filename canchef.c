#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y);
        
        // Total distance for going and returning home = 2 * Y
        // Maximum distance the car can travel with X liters = X * 15
        if (X * 15 >= 2 * Y) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
