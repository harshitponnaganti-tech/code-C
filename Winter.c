#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);

        int wearing = 0;
        int ans = 0;

        for (int i = 0; i < N; i++) {
            int temp;
            scanf("%d", &temp);

            if (temp < A) {
                // Jacket is compulsory
                if (wearing == 0) {
                    ans++;
                    wearing = 1;
                }
            }
            else if (temp > B) {
                // Jacket is not needed
                wearing = 0;
            }
            // A <= temp <= B:
            // Either wearing or not wearing is comfortable.
        }

        printf("%d\n", ans);
    }

    return 0;
}
