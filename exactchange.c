#include <stdio.h>

int main() {
    int n;
    // Read the input amount
    if (scanf("%d", &n) == 1) {
        if (n >= 5) {
            // Use 1 five-rupee coin and (n - 5) one-rupee coins
            // Total coins = 1 + n - 5 = n - 4
            printf("%d\n", n - 4);
        } else {
            // Use only n one-rupee coins
            printf("%d\n", n);
        }
    }
    return 0;
}
