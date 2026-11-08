#include <stdio.h>

void solve() {
    int N;
    long long X;
    scanf("%d %lld", &N, &X);
    
    long long total_water = 0;
    for (int i = 0; i < N; i++) {
        long long a;
        scanf("%lld", &a);
        total_water += a;
    }
    
    // Ceiling division to find the minimum number of bottles of capacity X needed
    long long min_bottles = (total_water + X - 1) / X;
    printf("%lld\n", min_bottles);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
