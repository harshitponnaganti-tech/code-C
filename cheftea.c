#include <stdio.h>

void solve() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    
    // Calculate the number of refills needed using ceiling division
    int refills = (X + Y - 1) / Y;
    
    // Total cost is refills multiplied by the cost per refill Z
    int total_cost = refills * Z;
    
    printf("%d\n", total_cost);
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
