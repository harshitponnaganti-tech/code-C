#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        int chicken = (Z % X == 0);
        int duck = (Z % Y == 0);

        if (chicken && duck)
            printf("ANY\n");
        else if (chicken)
            printf("CHICKEN\n");
        else if (duck)
            printf("DUCK\n");
        else
            printf("NONE\n");
    }

    return 0;
}
