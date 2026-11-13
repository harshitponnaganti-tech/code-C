#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int w, x, y, z;
        scanf("%d %d %d %d", &w, &x, &y, &z);
        
        // Check all possible combinations of one or more weights
        if (w == x || w == y || w == z ||
            w == x + y || w == x + z || w == y + z ||
            w == x + y + z) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
