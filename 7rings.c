#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int total = N * X;

        if (total >= 10000 && total <= 99999)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
