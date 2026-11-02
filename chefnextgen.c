#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b, x, y;
        scanf("%d %d %d %d", &a, &b, &x, &y);
        
        // Total power required = A * B
        // Total power available = X * Y
        if (x * y >= a * b) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
