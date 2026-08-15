#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int x;
        int max, position;

        for (int i = 1; i <= N; i++) {
            scanf("%d", &x);

            if (i == 1 || x > max) {
                max = x;
                position = i;
            }
        }

        printf("%d\n", position);
    }

    return 0;
}
