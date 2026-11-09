#include <stdio.h>

void solve() {
    int n;
    long long x, k;
    scanf("%d %lld %lld", &n, &x, &k);
    
    // The maximum bottles we can fill based on available water
    long long possible_by_water = k / x;
    
    // We cannot fill more than the total number of bottles available (n)
    if (possible_by_water > n) {
        printf("%d\n", n);
    } else {
        printf("%lld\n", possible_by_water);
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
