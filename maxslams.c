#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int needed = 25 - X;
    int years = (needed + 3) / 4;

    printf("%d\n", years);

    return 0;
}
