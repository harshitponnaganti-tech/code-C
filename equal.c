#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);

        if ((A + B) % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
