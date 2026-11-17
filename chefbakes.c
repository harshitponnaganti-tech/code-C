#include <stdio.h>

int main() {
    int N, X, Y;
    if (scanf("%d %d %d", &N, &X, &Y) == 3) {
        // Maximum cakes per vehicle
        int cakes_per_vehicle = Y / X;
        
        // Minimum vehicles needed (equivalent to ceil(N / cakes_per_vehicle))
        int vehicles = (N + cakes_per_vehicle - 1) / cakes_per_vehicle;
        
        printf("%d\n", vehicles);
    }
    return 0;
}
