#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        int even_count = n / 2;
        int odd_count = (n + 1) / 2;

        int total_duration = (even_count * a) + (odd_count * b);
        printf("%d\n", total_duration);
    }

    return 0;
}
