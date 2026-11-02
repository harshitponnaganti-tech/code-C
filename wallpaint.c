#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        // Area of one wall = X * Y
        // Cost to paint one wall = Area * 2 = (X * Y) * 2
        // Max walls completely painted = Total money (Z) / Cost per wall
        int cost_per_wall = x * y * 2;
        int max_walls = z / cost_per_wall;
        
        printf("%d\n", max_walls);
    }
    
    return 0;
}
