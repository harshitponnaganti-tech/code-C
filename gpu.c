#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        if (Z <= Y) {
            printf("-1\n");
        } else {
            int diff = Z - Y;
            int months = (X + diff - 1) / diff;
            printf("%d\n", months);
        }
    }

    return 0;
}
