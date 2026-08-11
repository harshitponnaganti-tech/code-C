#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (Y <= 10 * X)
            printf("CLOTH\n");
        else
            printf("DISPOSABLE\n");
    }

    return 0;
}
