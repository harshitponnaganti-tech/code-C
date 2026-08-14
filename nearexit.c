#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        if (X <= 50)
            printf("LEFT\n");
        else
            printf("RIGHT\n");
    }

    return 0;
}
