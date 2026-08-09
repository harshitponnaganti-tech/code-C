#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (3 * X < 2 * Y)
            printf("%d\n", 3 * X);
        else
            printf("%d\n", 2 * Y);
    }

    return 0;
}
