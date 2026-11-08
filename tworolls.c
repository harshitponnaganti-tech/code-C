#include <stdio.h>

void solve() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    int min_sum = 2 * Y;
    int max_sum = 2 * Y + 10;
    int required_sum = 50 - X;
    
    if (required_sum >= min_sum && required_sum <= max_sum) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
