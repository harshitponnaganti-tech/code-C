#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        if (N > M)
            printf("%d\n", N - M);
        else
            printf("0\n");
    }

    return 0;
}
