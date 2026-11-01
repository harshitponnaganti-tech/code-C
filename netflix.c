#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c, x;
        scanf("%d %d %d %d", &a, &b, &c, &x);
        
        // Check if any two combinations can sum up to at least x
        if ((a + b >= x) || (b + c >= x) || (a + c >= x)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
