
#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

        if (Y > X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
