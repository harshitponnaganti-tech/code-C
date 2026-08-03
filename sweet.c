#include <stdio.h>

int main() {
    int X, N;
    scanf("%d %d", &X, &N);

    int remaining = X - (N * 10);
    printf("%d", remaining / 20);

    return 0;
}
