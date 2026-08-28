#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int P;
        scanf("%d", &P);

        int count = -1;

        // Let x = number of 100-point problems
        // Let y = number of 1-point problems
        // x + y <= 10
        // 100x + y = P

        for (int x = 0; x <= 10; x++) {
            int y = P - 100 * x;

            if (y >= 0 && y <= 10 - x) {
                count = x + y;
                break;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
