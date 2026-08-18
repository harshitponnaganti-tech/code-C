#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int sum = 0;
        int possible = 1;

        for (int i = 1; i <= N; i++) {
            int A;
            scanf("%d", &A);

            sum += A;

            if (sum < 40 * i) {
                possible = 0;
            }
        }

        if (possible)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
