#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int x;
        scanf("%d", &x);

        if (x == 3) {
            printf("3\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}
