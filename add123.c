#include <stdio.h>

// Function to find the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

void solve() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    // Pairs from (1 and 3) + pairs from (2 and 2)
    int total_pairs = min(x, z) + (y / 2);
    
    printf("%d\n", total_pairs);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
