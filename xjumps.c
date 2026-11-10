#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Minimum moves = (number of Y-step moves) + (remaining 1-step moves)
        int moves = (x / y) + (x % y);
        printf("%d\n", moves);
    }
    return 0;
}
