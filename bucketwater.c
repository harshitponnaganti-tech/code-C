#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int w, x, y, z;
        scanf("%d %d %d %d", &w, &x, &y, &z);
        
        int total_water = w + (y * z);
        
        if (total_water > x) {
            printf("overflow\n");
        } else if (total_water == x) {
            printf("filled\n");
        } else {
            printf("unfilled\n");
        }
    }
    
    return 0;
}
