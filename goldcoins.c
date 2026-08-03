#include <stdio.h>

int main() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    if (X > Y)
        printf("%d", A);
    else
        printf("%d", B);

    return 0;
}
