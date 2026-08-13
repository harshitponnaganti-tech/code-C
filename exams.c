#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        if (2 * Z > X * Y)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
