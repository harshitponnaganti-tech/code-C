#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R);

        int sticks = X + R / 30;
        int plates = (sticks + Y - 1) / Y;

        printf("%d\n", plates);
    }

    return 0;
}
