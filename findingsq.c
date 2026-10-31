#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        // Compute square root and cast to int to round down (floor)
        int ans = (int)sqrt(n);
        printf("%d\n", ans);
    }
    
    return 0;
}
