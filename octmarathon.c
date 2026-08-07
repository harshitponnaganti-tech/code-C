#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X < 3)
        printf("GOLD");
    else if (X < 6)
        printf("SILVER");
    else
        printf("BRONZE");

    return 0;
}
