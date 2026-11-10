#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // The maximum number of neighbours fed completely is X divided by Y
        printf("%d\n", x / y);
    }
    
    return 0;
}
