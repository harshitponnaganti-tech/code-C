#include <stdio.h>

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Total matches played in a knockout tournament with n teams is always n - 1.
    // It's possible to have at least m matches if n - 1 >= m.
    if (n - 1 >= m) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
