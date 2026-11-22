#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n;
        scanf("%d", &n);

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            sum += x;
        }

        if (sum >= 0) {
            printf("0\n");
        } else {
            long long needed = -sum;
            long long ans = (needed + n - 1) / n;
            printf("%lld\n", ans);
        }
    }

    return 0;
}
