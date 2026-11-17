#include <stdio.h>

// Function to check if a number is imperfect
int isImperfect(int m) {
    int div2 = (m % 2 == 0);
    int div5 = (m % 5 == 0);
    // Divisible by either 2 or 5, but not both
    return (div2 || div5) && !(div2 && div5);
}

void solve() {
    int n;
    scanf("%d", &n);
    
    // Check differences 0, 1, 2, ... upwards from 0
    for (int d = 0; ; d++) {
        // Check n - d (ensure it's a positive integer, as numbers must be positive)
        if (n - d > 0 && isImperfect(n - d)) {
            printf("%d\n", d);
            return;
        }
        // Check n + d
        if (isImperfect(n + d)) {
            printf("%d\n", d);
            return;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
