#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        int count = 0;
        if (x >= 50) count++;
        if (y >= 50) count++;
        if (z >= 50) count++;
        
        if (count >= 2) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
