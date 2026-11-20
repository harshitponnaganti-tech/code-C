#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);

        int half_ones = x / 2;

        for (int i = 0; i < half_ones; i++) {
            putchar('1');
        }
        for (int i = 0; i < y; i++) {
            putchar('2');
        }
        for (int i = 0; i < half_ones; i++) {
            putchar('1');
        }
        putchar('\n');
    }

    return 0;
}
