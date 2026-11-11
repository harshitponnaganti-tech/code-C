#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        // Total money = (number of 10 rupee coins * 10) + (number of 5 rupee coins * 5)
        int total = (x * 10) + (y * 5);
        printf("%d\n", total);
    }
    return 0;
}
