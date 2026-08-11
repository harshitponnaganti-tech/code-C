#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int R, count = 0;

        for (int i = 0; i < 5; i++) {
            scanf("%d", &R);
            count += R;
        }

        if (count >= 4)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
