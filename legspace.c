#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    if (N < M)
        printf("YES");
    else
        printf("NO");

    return 0;
}
