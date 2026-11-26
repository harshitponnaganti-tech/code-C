#include <stdio.h>

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) {
        return 0;
    }

    while (T--) {
        int N, X, P;
        scanf("%d %d %d", &N, &X, &P);

        int incorrect = N - X;
        int score = (3 * X) - incorrect;

        if (score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}
