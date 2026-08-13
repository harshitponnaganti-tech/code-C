#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        if (N <= M * 36)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
