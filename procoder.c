#include <stdio.h>

int main() {
    int n, m;
    // Read the total lines (N) and the number of errors (M)
    if (scanf("%d %d", &n, &m) == 2) {
        // Check if errors are present in at least half of the total lines.
        // Using 2 * m >= n avoids floating-point division issues.
        if (2 * m >= n) {
            printf("NEWBIE\n");
        } else {
            printf("PRO\n");
        }
    }
    return 0;
}
