#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);

        if (M * K >= N)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
