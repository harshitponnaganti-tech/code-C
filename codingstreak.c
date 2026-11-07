#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int current_streak = 0;
        int max_streak = 0;
        
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            
            if (a > 0) {
                current_streak++;
                if (current_streak > max_streak) {
                    max_streak = current_streak;
                }
            } else {
                current_streak = 0;
            }
        }
        
        printf("%d\n", max_streak);
    }
    
    return 0;
}
