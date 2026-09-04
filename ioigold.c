#include <stdio.h>

int main() {
    int N, G;
    scanf("%d %d", &N, &G);

    if (N >= G)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
