#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int P, L;
        scanf("%d %d", &P, &L);

        if (100 * L >= 75 * P)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
