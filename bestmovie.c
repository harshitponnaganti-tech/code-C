#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int min_cost = -1;
        
        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            
            // Check if the movie has an IMDB score of at least 7
            if (a >= 7) {
                if (min_cost == -1 || b < min_cost) {
                    min_cost = b;
                }
            }
        }
        
        printf("%d\n", min_cost);
    }
    
    return 0;
}
