#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);

        if (7 - A < 7 - B)
            printf("%d\n", 7 - A);
        else
            printf("%d\n", 7 - B);
    }

    return 0;
}
