#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        printf("%d\n", (3 - X % 3) % 3);
    }

    return 0;
}
