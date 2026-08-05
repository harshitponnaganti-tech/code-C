#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        if (N % 2 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
