#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, D;
        scanf("%d %d %d", &N, &X, &D);

        int days = N / (5 * X) + D;

        printf("%d\n", days);
    }

    return 0;
}
