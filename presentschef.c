#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int coins = (N / 5) * 4 + (N % 5);

        printf("%d\n", coins);
    }

    return 0;
}
