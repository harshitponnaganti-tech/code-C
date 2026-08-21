#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        if ((A >= B && A <= C) || (A >= C && A <= B))
            printf("%d\n", A);
        else if ((B >= A && B <= C) || (B >= C && B <= A))
            printf("%d\n", B);
        else
            printf("%d\n", C);
    }

    return 0;
}
