#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b, x, y;
        scanf("%d %d %d %d", &a, &b, &x, &y);
        
        // Maximum number of times we can make the trade using currency 1
        int trades = a / x;
        
        // Total money = remaining currency 1 + new currency 2
        int total_money = (a - trades * x) + (b + trades * y);
        
        printf("%d\n", total_money);
    }
    
    return 0;
}
