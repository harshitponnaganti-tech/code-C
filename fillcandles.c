#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k, m;
        scanf("%d %d %d", &n, &k, &m);
        
        // Total capacity of one bag = K pockets * M candies per pocket
        int capacity_per_bag = k * m;
        
        // Calculate minimum bags using ceiling division: (n + capacity - 1) / capacity
        int bags = (n + capacity_per_bag - 1) / capacity_per_bag;
        
        printf("%d\n", bags);
    }
    return 0;
}
