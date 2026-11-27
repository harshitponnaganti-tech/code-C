#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int d[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &d[i]);
        }

        int is_non_decreasing = 1;
        for (int i = 0; i < n - 1; i++) {
            if (d[i] > d[i + 1]) {
                is_non_decreasing = 0;
                break;
            }
        }

        if (is_non_decreasing) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
