#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X + Y >= 2000)
        printf("YES");
    else
        printf("NO");

    return 0;
}
