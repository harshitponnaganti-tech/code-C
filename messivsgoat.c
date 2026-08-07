#include <stdio.h>

int main() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    int messi = (2 * A) + B;
    int ronaldo = (2 * X) + Y;

    if (messi > ronaldo)
        printf("Messi");
    else if (ronaldo > messi)
        printf("Ronaldo");
    else
        printf("Equal");

    return 0;
}
