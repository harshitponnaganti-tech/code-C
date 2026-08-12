#include <stdio.h>

int main() {
    int p, count = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &p);

        if (p >= 10) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
