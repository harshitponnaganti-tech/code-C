#include <stdio.h>

void solve() {
    int N, K;
    scanf("%d %d", &N, &K);
    
    int work_done = 0;
    int current_minute = 0;
    
    while (work_done < N) {
        current_minute++;
        // If current_minute is not a multiple of K, Chef works for 1 minute
        if (current_minute % K != 0) {
            work_done++;
        }
    }
    
    printf("%d\n", current_minute);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
