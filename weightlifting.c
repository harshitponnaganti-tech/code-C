#include <stdio.h>

int main() {
    int A1, A2, B1, B2, C1, C2;
    scanf("%d %d %d %d %d %d", &A1, &A2, &B1, &B2, &C1, &C2);

    int total = (A1 > A2 ? A1 : A2) +
                (B1 > B2 ? B1 : B2) +
                (C1 > C2 ? C1 : C2);

    printf("%d", total);

    return 0;
}
