#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // If students are more than available chairs, we need to buy the difference.
        // Otherwise, Chef doesn't need to buy any extra chairs (result is 0).
        if (x > y) {
            printf("%d\n", x - y);
        } else {
            printf("0\n");
        }
    }
    
    return 0;
}
