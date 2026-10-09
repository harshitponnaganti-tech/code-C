#include <stdio.h>

int main() {
    int X, Y;
    if (scanf("%d %d", &X, &Y) == 2) {
        if (X >= Y) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
