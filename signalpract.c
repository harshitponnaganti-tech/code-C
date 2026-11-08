#include <stdio.h>

void solve() {
    int N;
    scanf("%d", &N);
    char S[N + 1];
    scanf("%s", S);
    
    int silence_seen = 0;
    int pulse_count = 0;
    
    for (int i = 0; i < N; i++) {
        if (S[i] == '0') {
            silence_seen = 1;
        } else if (S[i] == '1' && silence_seen) {
            pulse_count++;
        }
    }
    
    printf("%d\n", pulse_count);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
