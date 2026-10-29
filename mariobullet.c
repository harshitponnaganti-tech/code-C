#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        // Time taken for the bullet to reach the goomba
        int travel_time = y / x;
        
        // Minimum time to wait before shooting, ensuring it takes at least Z seconds
        int delay = z - travel_time;
        
        // If travel time is already greater than or equal to Z, we wait 0 seconds
        if (delay < 0) {
            delay = 0;
        }
        
        printf("%d\n", delay);
    }
    
    return 0;
}
