#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int k, x;
        scanf("%d %d", &k, &x);
        
        // The maximum extra water is the total capacity minus the current water
        int extra_water = k - x;
        
        printf("%d\n", extra_water);
    }
    
    return 0;
}
