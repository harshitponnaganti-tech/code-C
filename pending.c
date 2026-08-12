#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long X, Y, Z;
        scanf("%lld %lld %lld", &X, &Y, &Z);

        long long required = X * Y;
        long long available = Z * 1440;

        if (required <= available)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
