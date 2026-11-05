#include <stdio.h>

void solve() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    // Valuation by first investor: A for 10% -> Valuation = A * 10
    // Valuation by second investor: B for 20% -> Valuation = B * 5
    int val1 = A * 10;
    int val2 = B * 5;
    
    if (val1 > val2) {
        printf("FIRST\n");
    } else if (val2 > val1) {
        printf("SECOND\n");
    } else {
        printf("ANY\n");
    }
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
