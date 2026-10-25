#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    // Calculate the perimeter of the rectangular park: 2 * (X + Y)
    int perimeter = 2 * (x + y);
    
    // Check if the perimeter is at least 1000 meters
    if (perimeter >= 1000) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
