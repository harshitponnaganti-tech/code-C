#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int sx, sy, ex, ey;
        scanf("%d %d %d %d", &sx, &sy, &ex, &ey);
        
        // If both row and column are different, we can reach in 1 move
        if (sx != ex && sy != ey) {
            printf("1\n");
        } 
        // Otherwise, we require 2 moves
        else {
            printf("2\n");
        }
    }
    
    return 0;
}
