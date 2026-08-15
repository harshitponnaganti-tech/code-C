#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int profit = 0;

        for (int i = X + 1; i <= N; i++) {
            profit += i - X;
        }

        printf("%d\n", profit);
    }

    return 0;
}
