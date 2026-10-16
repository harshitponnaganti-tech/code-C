#include <stdio.h>

int main() {
    int C, M, W, P, R;
    scanf("%d %d %d %d %d", &C, &M, &W, &P, &R);

    int score = (C * M) - (W * P);

    if (score >= R)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
