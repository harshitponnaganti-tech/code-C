#include <stdio.h>

void solve() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    // Check if it's already an arithmetic progression
    if (y - x == z - y) {
        printf("0\n");
    } else {
        // Since we can change any one number to any integer, 
        // we can always form an AP in 1 operation.
        printf("1\n");
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
