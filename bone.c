#include <stdio.h>

int main() {
    int N, M, X, Y;

    scanf("%d %d", &N, &M);
    scanf("%d %d", &X, &Y);

    printf("%d\n", (N * X) + (M * Y));

    return 0;
}
