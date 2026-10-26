#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        // Round to the nearest multiple of 3 using standard integer rounding
        int ans = (n + 1) / 3 * 3;
        printf("%d\n", ans);
    }
    return 0;
}
