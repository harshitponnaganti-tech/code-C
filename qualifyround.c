#include <stdio.h>

void solve() {
    int X, A, B;
    scanf("%d %d %d", &X, &A, &B);
    
    // Total score: 1 point for each easy problem (A), 2 points for each hard problem (B)
    int total_score = A + (2 * B);
    
    if (total_score >= X) {
        printf("Qualify\n");
    } else {
        printf("NotQualify\n");
    }
}

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            solve();
        }
    }
    return 0;
}
