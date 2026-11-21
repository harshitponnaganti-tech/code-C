#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[105];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int sushil_wealth = a[n - 1];
        int position = n;

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] * 2 <= sushil_wealth) {
                position--;
            } else {
                break;
            }
        }

        printf("%d\n", position);
    }

    return 0;
}
