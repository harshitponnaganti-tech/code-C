
#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &X);

        if (X > 100)
            X = X - 10;

        printf("%d\n", X);
    }

    return 0;
}

