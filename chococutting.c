#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            long long N, M;
            scanf("%lld %lld", &N, &M);
            
            // Total pieces is N * M. To divide into 2 equal parts, 
            // the total number of pieces must be even.
            if ((N * M) % 2 == 0) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
    return 0;
}
