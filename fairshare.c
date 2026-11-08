#include <stdio.h>

void solve() {
    int N, K;
    scanf("%d %d", &N, &K);
    
    // Each person's share before rounding down (using integer division for floor)
    int share = N / (K + 1);
    
    // Total amount paid back by K friends
    int total_repaid = K * share;
    
    // Net amount you paid
    int net_paid = N - total_repaid;
    
    printf("%d\n", net_paid);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
