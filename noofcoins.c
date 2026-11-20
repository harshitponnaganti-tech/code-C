#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int x;
        scanf("%d", &x);

        if (x % 5 != 0) {
            printf("-1\n");
        } else {
            int coins = (x / 10) + ((x % 10) / 5);
            printf("%d\n", coins);
        }
    }

    return 0;
}
