#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        long long x1, y1, x2, y2;
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);

        long long dx = llabs(x1 - x2);
        long long dy = llabs(y1 - y2);
        long long ans = dx > dy ? dx : dy;

        printf("%lld\n", ans);
    }

    return 0;
}
