#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X / 10 != X % 10)
        printf("Yes");
    else
        printf("No");

    return 0;
}
