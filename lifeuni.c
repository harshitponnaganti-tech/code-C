#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        // Stop processing when the input is 42
        if (n == 42) {
            break;
        }
        printf("%d\n", n);
    }
    return 0;
}
