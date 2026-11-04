#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            int N;
            scanf("%d", &N);
            
            int f = 0; // Count of even divisors
            int g = 0; // Count of odd divisors
            
            // Loop through all numbers from 1 to N to find divisors
            for (int i = 1; i <= N; i++) {
                if (N % i == 0) {
                    if (i % 2 == 0) {
                        f++;
                    } else {
                        g++;
                    }
                }
            }
            
            // Compare counts and print the result
            if (f > g) {
                printf("1\n");
            } else if (f == g) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        }
    }
    return 0;
}
