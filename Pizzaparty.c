#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int slices = (A + 1) * 4 + B * 3;

    int pizzas = (slices + 7) / 8;

    printf("%d\n", pizzas);

    return 0;
}
