#include <stdio.h>
#include <stdlib.h>

int main() {
    int X, Y, K;
    scanf("%d %d %d", &X, &Y, &K);

    if (abs(X - Y) <= K)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
