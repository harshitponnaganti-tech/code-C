#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);

        if (N + K <= M)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
