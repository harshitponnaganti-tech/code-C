#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int a[N];

        for (int i = 0; i < N; i++)
            scanf("%d", &a[i]);

        int ok = 1;

        /*
         * An element can only be changed if it is the
         * second-last element at some point.
         *
         * Therefore, we can repeatedly merge from the end.
         */

        for (int i = N - 1; i > 0; i--) {
            if (a[i - 1] % 2 != 0 && a[i] % 2 != 0) {
                // odd + odd = even
                a[i - 1] += a[i];
            } else if (a[i - 1] % 2 != 0 && a[i] % 2 == 0) {
                // odd + even = odd
                a[i - 1] += a[i];
            } else {
                // even + anything
                a[i - 1] += a[i];
            }
        }

        // If we perform all operations, only one number remains.
        // It must be even.
        if (a[0] % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
