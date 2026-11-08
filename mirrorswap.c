#include <stdio.h>

void solve() {
    int N;
    scanf("%d", &N);
    
    int A[205];
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &A[i]);
    }
    
    long long max_sum = 0;
    for (int i = 0; i < N; i++) {
        int mirror_idx = 2 * N - 1 - i;
        if (A[i] > A[mirror_idx]) {
            max_sum += A[i];
        } else {
            max_sum += A[mirror_idx];
        }
    }
    
    printf("%lld\n", max_sum);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
