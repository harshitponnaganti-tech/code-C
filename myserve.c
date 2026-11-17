#include <stdio.h>

void solve() {
    int p, q;
    scanf("%d %d", &p, &q);
    
    // Check whose turn it is based on the total points scored (P + Q)
    if (((p + q) / 2) % 2 == 0) {
        printf("Alice\n");
    } else {
        printf("Bob\n");
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
