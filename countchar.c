#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        char s[15];
        scanf("%s", s);
        
        int count_a = 0;
        int count_b = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') {
                count_a++;
            } else if (s[i] == 'b') {
                count_b++;
            }
        }
        
        printf("%d %d\n", count_a, count_b);
    }
    
    return 0;
}
