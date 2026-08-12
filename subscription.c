#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N, X, Y;
        scanf("%lld %lld %lld", &N, &X, &Y);

        long long cost;

        if (N <= 3)
            cost = N * X;
        else
            cost = 3 * X + (N - 3) * Y;

        printf("%lld\n", cost);
    }

    return 0;
}
