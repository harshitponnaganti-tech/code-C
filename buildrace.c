#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, X, Y;
        scanf("%d %d %d %d", &A, &B, &X, &Y);

        if (A * Y < B * X)
            printf("Chef\n");
        else if (A * Y > B * X)
            printf("Chefina\n");
        else
            printf("Both\n");
    }

    return 0;
}
