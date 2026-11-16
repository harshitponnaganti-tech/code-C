#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        
        int discount1 = x / 10;
        int discount2 = 100;
        
        if (discount1 > discount2) {
            printf("%d\n", discount1);
        } else {
            printf("%d\n", discount2);
        }
    }
    return 0;
}
