#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int color[1000];
        int count = 0;

        for (int i = 0; i < N; i++) {
            int C;
            scanf("%d", &C);

            int found = 0;

            for (int j = 0; j < count; j++) {
                if (color[j] == C) {
                    found = 1;
                    break;
                }
            }

            if (!found) {
                color[count] = C;
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
