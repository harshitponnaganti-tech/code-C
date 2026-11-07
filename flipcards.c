#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        
        // Minimum operations is the minimum of face-up (x) and face-down (n - x) cards
        if (x < n - x) {
            printf("%d\n", x);
        } else {
            printf("%d\n", n - x);
        }
    }
    
    return 0;
}
