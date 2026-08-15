#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int R, B, G;
        scanf("%d %d %d", &R, &B, &G);

        int bundles = R;

        if (B < bundles)
            bundles = B;

        if (G < bundles)
            bundles = G;

        int remaining = R + B + G - 3 * bundles;

        int answer = bundles * 10 + remaining * 3;

        printf("%d\n", answer);
    }

    return 0;
}
