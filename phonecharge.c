#include <stdio.h>

void solve() {
    int x, a, b;
    scanf("%d %d %d", &x, &a, &b);
    
    long long total_time = 0;
    if (x < 80) {
        total_time += (long long)(80 - x) * a;
        total_time += (long long)(100 - 80) * b;
    } else {
        total_time += (long long)(100 - x) * b;
    }
    
    printf("%lld\n", total_time);
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
