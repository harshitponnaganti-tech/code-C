#include <stdio.h>
#include <limits.h>

void solve() {
    int n;
    scanf("%d", &n);

    long long total_sum = 0;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total_sum += a[i];
    }

    // Find the minimum sum of two consecutive elements
    int min_consecutive_sum = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        int current_pair_sum = a[i] + a[i + 1];
        if (current_pair_sum < min_consecutive_sum) {
            min_consecutive_sum = current_pair_sum;
        }
    }

    // Maximum earnings = total_sum - (min_consecutive_sum / 2)
    long long max_earnings = total_sum - (min_consecutive_sum / 2);
    
    printf("%lld\n", max_earnings);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
