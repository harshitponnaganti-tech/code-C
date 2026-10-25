#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    // Compare the previous value (X) and the new value (Y)
    if (y > x) {
        printf("INCREASED\n");
    } else if (y < x) {
        printf("DECREASED\n");
    } else {
        printf("SAME\n");
    }
    
    return 0;
}
