#include <stdio.h>

void solve() {
    long long N, X;
    scanf("%lld %lld", &N, &X);
    
    long long total_matching;
    if (X % 2 == 0) {
        // X is even, count even numbers from 1 to N, then exclude X
        total_matching = (N / 2) - 1;
    } else {
        // X is odd, count odd numbers from 1 to N, then exclude X
        total_matching = ((N + 1) / 2) - 1;
    }
    
    printf("%lld\n", total_matching);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
