#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        // 20% commission = X / 5
        // Need commission >= 100
        int answer = (500 + X - 1) / X;

        printf("%d\n", answer);
    }

    return 0;
}
