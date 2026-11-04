#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Calculate Alice's and Bob's scores
        int alice = (x + y) / 2;
        int bob = (y - x) / 2;
        
        printf("%d %d\n", alice, bob);
    }
    
    return 0;
}
