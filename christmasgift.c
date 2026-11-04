#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int h, l, w;
        scanf("%d %d %d", &h, &l, &w);
        
        // Calculate the total surface area of one rectangular gift box: 2*(LH + HW + LW)
        int surface_area = 2 * (l * h + h * w + l * w);
        
        // Total available wrapping paper is 1000 square centimeters
        int gifts = 1000 / surface_area;
        
        printf("%d\n", gifts);
    }
    
    return 0;
}
