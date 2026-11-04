#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b, c, d;
        scanf("%d %d", &a, &b);
        scanf("%d %d", &c, &d);
        
        // Check if the final score is possible (both teams can only score more or keep same goals)
        if (c >= a && d >= b) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }
    
    return 0;
}
