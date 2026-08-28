#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        if (K >= 10 * N && K <= 12 * N)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
