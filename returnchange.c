#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int x;
        scanf("%d", &x);

        int rem = x % 10;
        int rounded = (rem >= 5) ? (x + (10 - rem)) : (x - rem);
        int change = 100 - rounded;

        printf("%d\n", change);
    }

    return 0;
}
