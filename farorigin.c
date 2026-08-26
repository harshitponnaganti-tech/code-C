#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X1, Y1, X2, Y2;
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

        int alex = X1 * X1 + Y1 * Y1;
        int bob = X2 * X2 + Y2 * Y2;

        if (alex > bob)
            printf("ALEX\n");
        else if (bob > alex)
            printf("BOB\n");
        else
            printf("EQUAL\n");
    }

    return 0;
}
