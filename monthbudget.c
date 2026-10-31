#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Total expense for 30 days is y * 30
        if (x >= y * 30) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
