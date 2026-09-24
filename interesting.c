#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, Y;

    scanf("%d %d", &X, &Y);

    if (abs(X - Y) <= 2)
        printf("Interesting\n");
    else
        printf("Boring\n");

    return 0;
}
