#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        printf("%d\n", (N + 3) / 4);
    }

    return 0;
}
