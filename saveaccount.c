#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int total = x * y;
        if (total <= z) {
            printf("0\n");
        } else {
            int excess = total - z;
            int reductions = (excess + y - 1) / y;
            printf("%d\n", reductions);
        }
    }

    return 0;
}
