#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        long long savings = 1LL << (x - n);
        printf("%lld\n", savings);
    }

    return 0;
}
