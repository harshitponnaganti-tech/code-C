#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z);

        int balance = W + (X - Y) * Z;

        printf("%d\n", balance);
    }

    return 0;
}
