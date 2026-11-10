#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        if (k <= n) {
            printf("0\n");
        } else {
            printf("%d\n", 2 * (k - n));
        }
    }
    
    return 0;
}
