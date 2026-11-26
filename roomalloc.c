#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n;
        scanf("%d", &n);

        long long rooms = 0;
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            rooms += (a + 1) / 2;
        }

        printf("%lld\n", rooms);
    }

    return 0;
}
