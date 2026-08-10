#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int K, X;
        scanf("%d %d", &K, &X);

        printf("%d\n", K - X);
    }

    return 0;
}
