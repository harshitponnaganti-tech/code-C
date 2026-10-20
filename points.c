
#include <stdio.h>

int main() {
    int X, Y, A, B;
    scanf("%d %d %d %d", &X, &Y, &A, &B);

    if (X > A)
        printf("Alice\n");
    else if (X < A)
        printf("Bob\n");
    else if (Y >= B)
        printf("Alice\n");
    else
        printf("Bob\n");

    return 0;
}
