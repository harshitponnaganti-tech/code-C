#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D);

        int first = A - C;
        int second = B - D;

        if (first < second)
            printf("First\n");
        else if (second < first)
            printf("Second\n");
        else
            printf("Any\n");
    }

    return 0;
}
