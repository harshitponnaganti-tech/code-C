#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int diff = A - B;

    if (diff % 2 == 0)
        printf("%d\n", diff / 2);
    else
        printf("-1\n");

    return 0;
}
