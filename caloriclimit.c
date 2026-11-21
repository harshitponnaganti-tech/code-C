#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int calories = 0;
        int eaten = 0;
        int stopped = 0;

        for (int i = 0; i < n; i++) {
            int sweet;
            scanf("%d", &sweet);

            if (!stopped) {
                if (calories + sweet <= k) {
                    calories += sweet;
                    eaten++;
                } else {
                    stopped = 1;
                }
            }
        }

        printf("%d\n", eaten);
    }

    return 0;
}
