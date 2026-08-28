#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int red = 0;
        int blue = 0;
        int zero = 0;

        for (int i = 0; i < N; i++) {
            int C;
            scanf("%d", &C);

            if (C == 1)
                red++;
            else if (C == 2)
                blue++;
            else
                zero++;
        }

        if (N % 2 != 0) {
            printf("NO\n");
        }
        else if (abs(red - blue) <= zero) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
