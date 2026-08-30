#include <stdio.h>

int main() {
    int R, O, C;

    scanf("%d %d %d", &R, &O, &C);

    int maxScore = C + (20 - O) * 36;

    if (maxScore > R) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
