#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        int breaks = (X - 1) / 3;
        int ans = X * Y + breaks * Z;

        printf("%d\n", ans);
    }

    return 0;
}
