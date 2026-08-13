#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int subscriptions = (N + 5) / 6;
        printf("%d\n", subscriptions * X);
    }

    return 0;
}
