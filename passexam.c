#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        if (A + B + C >= 100 && A >= 10 && B >= 10 && C >= 10)
            printf("PASS\n");
        else
            printf("FAIL\n");
    }

    return 0;
}
