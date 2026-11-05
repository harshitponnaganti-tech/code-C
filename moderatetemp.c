#include <stdio.h>

void solve() {
    int N;
    scanf("%d", &N);
    
    int A[105];
    int max_temp = -1, min_temp = 105;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] > max_temp) {
            max_temp = A[i];
        }
        if (A[i] < min_temp) {
            min_temp = A[i];
        }
    }
    
    // Count days that are strictly between min_temp and max_temp
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] > min_temp && A[i] < max_temp) {
            count++;
        }
    }
    
    printf("%d\n", count);
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
