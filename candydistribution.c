#include <stdio.h>

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Check if n is divisible by m AND the number of candies each friend gets (n / m) is even
    if (n % m == 0 && (n / m) % 2 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
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
