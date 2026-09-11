#include <stdio.h>

int main() {
    int X, Y, F;
    scanf("%d %d %d", &X, &Y, &F);

    int cost1 = 12 * X;
    int cost2 = 12 * Y + F;

    if (cost1 < cost2)
        printf("%d\n", cost1);
    else
        printf("%d\n", cost2);

    return 0;
}
