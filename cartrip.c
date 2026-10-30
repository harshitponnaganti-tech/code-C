#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x;
        scanf("%d", &x);
        
        // Chef must pay for at least 300 kms
        int distance = (x > 300) ? x : 300;
        
        // Cost is 10 rupees per km
        int cost = distance * 10;
        
        printf("%d\n", cost);
    }
    
    return 0;
}
