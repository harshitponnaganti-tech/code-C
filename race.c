#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, A, B;
        scanf("%d %d %d %d", &X, &Y, &A, &B);

        int gold = 2;

        // If Chef and rival are in the same race,
        // Chef cannot win gold there.
        if (X == A || X == B)
            gold--;

        if (Y == A || Y == B)
            gold--;

        printf("%d\n", gold);
    }

    return 0;
}
