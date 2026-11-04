#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        long long total_time = 0;
        
        // Simulate each temperature step from X down to Y + 1
        for (int K = X; K > Y; K--) {
            // Time to reduce temperature from K to K-1 is ceil(K / 10.0)
            int time_taken = (K + 9) / 10;
            total_time += time_taken;
        }
        
        printf("%lld\n", total_time);
    }
    
    return 0;
}
