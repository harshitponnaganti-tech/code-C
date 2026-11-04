#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int x = 1;
        // Keep passing the ball as long as the next player's index is <= n
        while (x + k <= n) {
            x += k;
        }
        
        printf("%d\n", x);
    }
    
    return 0;
}
