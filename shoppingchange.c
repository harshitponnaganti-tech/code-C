#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        printf("%d\n", 100 - X);
    }

    return 0;
}
