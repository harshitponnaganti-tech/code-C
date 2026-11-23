#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int a, b, c, x;
        scanf("%d %d %d %d", &a, &b, &c, &x);

        if ((a + b >= x) || (a + c >= x) || (b + c >= x)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
