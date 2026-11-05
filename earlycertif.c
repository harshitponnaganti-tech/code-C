#include <stdio.h>

void solve() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    char A[105], B[105];
    scanf("%s %s", A, B);
    
    // Find and print the longest common prefix
    for (int i = 0; i < N && i < M; i++) {
        if (A[i] == B[i]) {
            printf("%c", A[i]);
        } else {
            break;
        }
    }
    printf("\n");
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
