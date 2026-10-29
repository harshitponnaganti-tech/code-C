#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int x = n; // Frog starts at lily pad N
        for (int i = 1; i <= n - 1; i++) {
            if (i % 2 != 0) {
                // Odd jump: jump left by (N - i)
                x -= (n - i);
            } else {
                // Even jump: jump right by (N - i)
                x += (n - i);
            }
        }
        
        printf("%d\n", x);
    }
    
    return 0;
}
