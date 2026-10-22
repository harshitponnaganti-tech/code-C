#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int teams = X - Y;

    if (teams < 0)
        teams = -teams;

    printf("%d\n", teams - 1);

    return 0;
}
