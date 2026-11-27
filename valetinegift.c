#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int x;
        scanf("%d", &x);
        if (x >= 127) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
