#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);

        int score_ab = (500 - 2 * x) + (1000 - 4 * (x + y));
        int score_ba = (1000 - 4 * y) + (500 - 2 * (x + y));

        if (score_ab > score_ba) {
            printf("%d\n", score_ab);
        } else {
            printf("%d\n", score_ba);
        }
    }

    return 0;
}
