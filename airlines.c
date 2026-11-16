#include <stdio.h>
#include <math.h>

void solve() {
    long long x, n;
    scanf("%lld %lld", &x, &n);
    
    // Each plane can carry up to 100 passengers.
    // Total planes needed = ceil(N / 100)
    // Integer arithmetic for ceil(N / 100) is (N + 99) / 100
    long long planes_needed = (n + 99) / 100;
    
    // If the planes needed are more than what the airline already owns (X),
    // they need to buy the difference. Otherwise, they need 0 more.
    if (planes_needed > x) {
        printf("%lld\n", planes_needed - x);
    } else {
        printf("0\n");
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
