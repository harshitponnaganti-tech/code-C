#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int odd_count = 0;
        int even_count = 0;
        
        // Loop through all numbers from 1 to n to check divisors
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if (i % 2 == 0) {
                    even_count++;
                } else {
                    odd_count++;
                }
            }
        }
        
        printf("%d %d\n", odd_count, even_count);
    }
    return 0;
}
