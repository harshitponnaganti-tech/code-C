#include <stdio.h>

int main() {
    int a, b;
    // Read the numerator (a) and denominator (b)
    if (scanf("%d %d", &a, &b) == 2) {
        // Output the maximum of a and b
        if (a > b) {
            printf("%d\n", a);
        } else {
            printf("%d\n", b);
        }
    }
    return 0;
}
