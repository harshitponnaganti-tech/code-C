#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int is_good = 1;
        for (int i = 0; i < n; i++) {
            int score;
            scanf("%d", &score);
            // A problem is good if every judge gives a score > 4
            if (score <= 4) {
                is_good = 0;
            }
        }
        
        if (is_good) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
