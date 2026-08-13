#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);

        int mixtures = A;

        if (B / 2 < mixtures)
            mixtures = B / 2;

        printf("%d\n", mixtures * 3);
    }

    return 0;
}
