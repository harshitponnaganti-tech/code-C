#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int x;
        scanf("%d", &x);
        // The original price is 100 rupees, and x is the percentage discount.
        // The final price to pay is 100 - x.
        printf("%d\n", 100 - x);
    }
    
    return 0;
}discount
