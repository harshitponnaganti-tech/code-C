#include <stdio.h>

int main() {
    int N, M, A;
    scanf("%d %d %d", &N, &M, &A);

    if (N * A >= M)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
