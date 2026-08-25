#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int best = 0;

        for (int length = 1; length <= N / 4; length++) {
            int width = (N / 2) - length;

            if (width > 0) {
                int area = length * width;

                if (area > best)
                    best = area;
            }
        }

        printf("%d\n", best);
    }

    return 0;
}
