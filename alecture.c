#include <stdio.h>

int main() {
    int n;
    // Read the number of teams
    if (scanf("%d", &n) == 1) {
        // Each team has exactly 3 participants
        printf("%d\n", n * 3);
    }
    return 0;
}
