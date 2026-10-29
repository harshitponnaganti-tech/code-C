#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Chef likes the match if it's a draw (x == y) 
        // and at least one goal has been scored (x > 0 or y > 0)
        if (x == y && x > 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
