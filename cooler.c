#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, M;
        scanf("%d %d %d", &X, &Y, &M);

        if (X * M < Y)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
