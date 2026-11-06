#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            int A, B, C;
            scanf("%d %d %d", &A, &B, &C);
            
            // Find the maximum of A, B, and C
            int max = A;
            if (B > max) {
                max = B;
            }
            if (C > max) {
                max = C;
            }
            
            printf("%d\n", max);
        }
    }
    return 0;
}
