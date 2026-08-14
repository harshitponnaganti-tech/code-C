#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);

        if (100 * B > 225 * A)
            printf("Small\n");
        else if (100 * B < 225 * A)
            printf("Large\n");
        else
            printf("Equal\n");
    }

    return 0;
}
