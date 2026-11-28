#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        long long n, k, x, y;
        scanf("%lld %lld %lld %lld", &n, &k, &x, &y);

        long long min_cost = (x < y) ? x : y;
        long long cost = k * x + (n - k) * min_cost;

        printf("%lld\n", cost);
    }

    return 0;
}
