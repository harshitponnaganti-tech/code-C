#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, sum = 0;
        scanf("%d", &N);

        while (N > 0) {
            sum += N % 10;
            N /= 10;
        }

        printf("%d\n", sum);
    }

    return 0;
}
