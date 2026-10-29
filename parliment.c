#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        
        // The resolution passes if half or more than half vote in favour
        // This means X >= (N + 1) / 2 or 2 * X >= N
        if (2 * x >= n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
