#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    
    // If n < 4, we cannot form a non-degenerate triangle
    if (n < 4) {
        printf("-1\n");
    } else {
        // The maximum perimeter is formed by the three largest sticks: n, n-1, and n-2
        long long max_perimeter = n + (n - 1) + (n - 2);
        printf("%lld\n", max_perimeter);
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
