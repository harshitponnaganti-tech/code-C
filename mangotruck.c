#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        // The maximum number of mangoes can be found using integer division:
        // (Bridge Weight Limit - Truck Weight) / Mango Weight
        int max_mangoes = (z - y) / x;
        printf("%d\n", max_mangoes);
    }
    return 0;
}
