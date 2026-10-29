#include <stdio.h>

int main() {
    int x, y;
    if (scanf("%d %d", &x, &y) == 2) {
        printf("%d\n", x * y);
    }
    
    return 0;
}
