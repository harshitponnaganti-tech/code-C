#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (Y <= X)
            printf("%d\n", Y);
        else
            printf("%d\n", X + (Y - X) * 2);
    }

    return 0;
}
