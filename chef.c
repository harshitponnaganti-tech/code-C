#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        printf("%d\n", (5 * X + 10 * Y) / Z);
    }

    return 0;
}
