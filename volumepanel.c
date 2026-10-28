#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // The minimum button presses is the absolute difference between x and y
        int ans = abs(x - y);
        printf("%d\n", ans);
    }
    
    return 0;
}
