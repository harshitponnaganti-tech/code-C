#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int x;
        scanf("%d", &x);

        int change = 100 - x;
        int max_payback = (change / 10) * 10;

        printf("%d\n", max_payback);
    }

    return 0;
}
