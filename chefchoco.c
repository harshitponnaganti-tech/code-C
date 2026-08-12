#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int C, X, Y;
        scanf("%d %d %d", &C, &X, &Y);

        if (X >= C)
            printf("0\n");
        else
            printf("%d\n", (C - X) * Y);
    }

    return 0;
}
