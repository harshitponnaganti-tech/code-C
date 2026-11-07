#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // The distance between policeman (X) and thief (Y)
        // Since the policeman moves at 2 units/sec and the thief at 1 unit/sec,
        // the relative speed is (2 - 1) = 1 unit per second.
        // Therefore, the time taken is simply the absolute difference between X and Y.
        printf("%d\n", abs(x - y));
    }
    return 0;
}
