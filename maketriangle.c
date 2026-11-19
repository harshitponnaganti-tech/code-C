#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        // Find the largest side c, and the sum of the other two sides
        int c = x;
        int sum_ab = y + z;

        if (y > c) {
            c = y;
            sum_ab = x + z;
        }
        if (z > c) {
            c = z;
            sum_ab = x + y;
        }

        // We need sum_ab > c, so sum_ab must be at least c + 1
        if (sum_ab > c) {
            printf("0\n");
        } else {
            printf("%d\n", (c + 1) - sum_ab);
        }
    }

    return 0;
}
