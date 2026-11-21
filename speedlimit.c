#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int a, x, b, y;
        scanf("%d %d %d %d", &a, &x, &b, &y);

        int alice_val = a * y;
        int bob_val = b * x;

        if (alice_val > bob_val) {
            printf("ALICE\n");
        } else if (bob_val > alice_val) {
            printf("BOB\n");
        } else {
            printf("EQUAL\n");
        }
    }

    return 0;
}
