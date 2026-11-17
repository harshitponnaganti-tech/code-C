#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Each box needs 3 chocolates. Total chocolates required = x * 3.
        if (y >= x * 3) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
