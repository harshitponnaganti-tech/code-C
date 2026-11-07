#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    // Maximize 2 kg weights (cost 30), and use 1 kg weight (cost 20) if N is odd
    int cost = (n / 2) * 30 + (n % 2) * 20;
    
    printf("%d\n", cost);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
