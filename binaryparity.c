#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        unsigned int n;
        scanf("%u", &n);

        int ones = __builtin_popcount(n);
        if (ones % 2 == 0) {
            printf("EVEN\n");
        } else {
            printf("ODD\n");
        }
    }

    return 0;
}
