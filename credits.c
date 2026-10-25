#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        // Total credits = (RTP courses * 4) + (Audit courses * 2) + (Non-RTP courses * 0)
        int total_credits = (x * 4) + (y * 2) + (z * 0);
        
        printf("%d\n", total_credits);
    }
    
    return 0;
}
