#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int minimum = (N + 1) / 2;
        int maximum = N;

        printf("%d %d\n", minimum, maximum);
    }

    return 0;
}
