#include <stdio.h>

int main() {
    int L, R;
    scanf("%d %d", &L, &R);

    if (L % 2 == 0 || R % 2 == 0 || L < R)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
