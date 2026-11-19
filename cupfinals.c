#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int x, y, d;
        scanf("%d %d %d", &x, &y, &d);

        int diff = abs(x - y);
        if (diff <= d) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
