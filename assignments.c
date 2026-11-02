#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            int X;
            scanf("%d", &X);
            
            // He needs 3 hours and must finish by 10 pm.
            // So he must start at or before 7 pm (10 - 3 = 7).
            if (X + 3 <= 10) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
    return 0;
}
