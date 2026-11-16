#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    // (n / 4) maximizes the number of cows
    // (n % 4 / 2) accounts for the remaining 2 legs if n is not divisible by 4
    int ans = (n / 4) + (n % 4 / 2);
    printf("%d\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
