#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        long long height = 0;
        long long coins = 0;

        while (coins + height + 1 <= N) {
            height++;
            coins += height;
        }

        printf("%lld\n", height);
    }

    return 0;
}
