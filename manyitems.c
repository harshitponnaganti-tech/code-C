#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        // Each bag can hold 10 items
        int bags = (N + 9) / 10;

        printf("%d\n", bags);
    }

    return 0;
}
