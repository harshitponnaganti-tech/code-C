#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    int denominations[] = {100, 50, 10, 5, 2, 1};
    int num_denoms = 6;

    while (t--) {
        long long n;
        scanf("%lld", &n);

        long long notes = 0;
        for (int i = 0; i < num_denoms; i++) {
            int d = denominations[i];
            notes += n / d;
            n %= d;
        }

        printf("%lld\n", notes);
    }

    return 0;
}
