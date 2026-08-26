#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int ans = 2 * (y < z ? y : z);

        printf("%d\n", ans);
    }

    return 0;
}
