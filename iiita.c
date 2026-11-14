#include <stdio.h>

void solve() {
    long long n, m;
    scanf("%lld %lld", &n, &m);
    
    // Om needs strictly more than half of the total votes to ensure a majority win.
    long long ans = (m / 2) + 1;
    printf("%lld\n", ans);
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
