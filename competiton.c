#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int prize = 1000 * (1 << (4 - X));

    printf("%d\n", prize);

    return 0;
}
