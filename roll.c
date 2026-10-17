
#include <stdio.h>

int main() {
    int X, K, Y;
    scanf("%d %d %d", &X, &K, &Y);

    if (Y % K == 0 && Y / K <= X) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

