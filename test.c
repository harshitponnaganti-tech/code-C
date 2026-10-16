#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    int australia = X + Z;

    if (Y > australia)
        printf("0\n");
    else
        printf("%d\n", australia - Y + 1);

    return 0;
}
