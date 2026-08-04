#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        printf("%d\n", (5 * N) + (7 * M));
    }

    return 0;
}
