#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        int total = A + B + C;
        int max = A;

        if (B > max)
            max = B;

        if (C > max)
            max = C;

        if (2 * max <= total + 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
