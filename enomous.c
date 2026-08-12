#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long N;
        scanf("%lld", &N);

        int last = N % 10;
        int first = N;

        while (first >= 10) {
            first /= 10;
        }

        printf("%d\n", first + last);
    }

    return 0;
}
