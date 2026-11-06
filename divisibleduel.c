#include <stdio.h>

void solve() {
    long long X, Y;
    if (scanf("%lld %lld", &X, &Y) != 2) return;
    
    long long sum_even = 0;
    long long sum_odd = 0;
    
    // Iterate through all multiples of X between X and Y inclusive
    for (long long mult = X; mult <= Y; mult += X) {
        if (mult % 2 == 0) {
            sum_even += mult;
        } else {
            sum_odd += mult;
        }
    }
    
    if (sum_even >= sum_odd) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            solve();
        }
    }
    return 0;
}
