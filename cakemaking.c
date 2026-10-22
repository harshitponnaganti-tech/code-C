#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int total = A * B;

    if (A < B)
        total -= A;
    else
        total -= B;

    printf("%d\n", total);

    return 0;
}
