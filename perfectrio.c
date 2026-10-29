#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        // Check if any one number is equal to the sum of the other two
        if ((a == b + c) || (b == a + c) || (c == a + b)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
