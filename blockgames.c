#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n;
        scanf("%d", &n);

        int original = n;
        int reversed = 0;

        while (n > 0) {
            reversed = reversed * 10 + (n % 10);
            n /= 10;
        }

        if (original == reversed) {
            printf("wins\n");
        } else {
            printf("loses\n");
        }
    }

    return 0;
}
