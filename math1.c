#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        if (y > x) {
            printf("%d\n", y - x);
        } else {
            printf("0\n");
        }
    }
    return 0;
}
