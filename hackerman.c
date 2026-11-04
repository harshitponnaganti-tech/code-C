#include <stdio.h>

// Function to check if a number is prime (for sums between 2 and 12)
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            int A, B;
            scanf("%d %d", &A, &B);
            
            int sum = A + B;
            
            // Alice wins if the sum is a prime number, otherwise Bob wins
            if (isPrime(sum)) {
                printf("Alice\n");
            } else {
                printf("Bob\n");
            }
        }
    }
    return 0;
}
