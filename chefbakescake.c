#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int A[105], B[105];
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }
        
        int total_cost = 0;
        for (int i = 0; i < N; i++) {
            // If we need more than we currently have, we must buy the difference
            if (A[i] > B[i]) {
                total_cost += (A[i] - B[i]);
            }
        }
        
        printf("%d\n", total_cost);
    }
    
    return 0;
}
