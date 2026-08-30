#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int max = 0;

        for (int i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);

            if (x > max) {
                max = x;
            }
        }

        printf("%d\n", max);
    }

    return 0;
}
