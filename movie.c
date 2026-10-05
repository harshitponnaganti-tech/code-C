#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    int ans = 2 * X + 3 * Y;

    // Buy 1 combo + 1 popcorn + 2 drinks
    int option1 = Z + X + 2 * Y;

    // Buy 2 combos + 1 drink
    int option2 = 2 * Z + Y;

    // Buy 2 popcorn + 3 drinks separately
    int option3 = 2 * X + 3 * Y;

    ans = option1;

    if (option2 < ans)
        ans = option2;

    if (option3 < ans)
        ans = option3;

    printf("%d\n", ans);

    return 0;
}
