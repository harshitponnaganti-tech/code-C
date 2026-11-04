#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int sum_odd = 0;   // Sum for days 1, 3, 5, ... (1-indexed)
        int sum_even = 0;  // Sum for days 2, 4, 6, ... (1-indexed)
        
        for (int i = 1; i <= N; i++) {
            int hours;
            scanf("%d", &hours);
            if (i % 2 != 0) {
                sum_odd += hours;
            } else {
                sum_even += hours;
            }
        }
        
        // Output the maximum of the two choices
        if (sum_odd > sum_even) {
            printf("%d\n", sum_odd);
        } else {
            printf("%d\n", sum_even);
        }
    }
    
    return 0;
}
