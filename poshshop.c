#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n;
        scanf("%d", &n);

        int c[105];
        int ans = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &c[i]);
            // Option 1: buy just this single item
            if (c[i] > ans) {
                ans = c[i];
            }
        }

        // Option 2: buy two items i < j with c[i] <= c[j]
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (c[i] <= c[j] && c[i] + c[j] > ans) {
                    ans = c[i] + c[j];
                }
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
