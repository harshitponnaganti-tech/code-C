#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x;
        scanf("%d", &x);
        
        // The transformation cycle of 3 states repeats every 3 mushrooms:
        // x % 3 == 1 -> HUGE
        // x % 3 == 2 -> SMALL
        // x % 3 == 0 -> NORMAL
        if (x % 3 == 1) {
            printf("HUGE\n");
        } else if (x % 3 == 2) {
            printf("SMALL\n");
        } else {
            printf("NORMAL\n");
        }
    }
    
    return 0;
}
