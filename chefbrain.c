#include <stdio.h>

int main() {
    int x, y;
    // Read the threshold limit (X) and the current working rate (Y)
    if (scanf("%d %d", &x, &y) == 2) {
        // If the current rate is strictly greater than the threshold, Chef is prone to errors
        if (y > x) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
