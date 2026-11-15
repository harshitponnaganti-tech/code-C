#include <stdio.h>

int main() {
    int N, M;
    // Read N and M
    if (scanf("%d %d", &N, &M) == 2) {
        // Remaining cakes after giving 1 to each of the N customers
        int extra_cakes = M - N;
        
        // We can make at most 'extra_cakes' customers happy, 
        // but we can never have more happy customers than total customers N.
        int happy_customers = (extra_cakes < N) ? extra_cakes : N;
        
        printf("%d\n", happy_customers);
    }
    return 0;
}
