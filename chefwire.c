#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, x;
        scanf("%d %d %d", &n, &m, &x);
        
        // Perimeter is 2 * (N + M), total cost is perimeter * X
        int cost = 2 * (n + m) * x;
        printf("%d\n", cost);
    }
    return 0;
}
