#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        if (X <= 20) {
            printf("%d\n", X * 10);
        } else {
            int remaining = X - 20;
            int balls = remaining / 2;
            int cost = 200 + balls * 5;

            printf("%d\n", cost);
        }
    }

    return 0;
}
