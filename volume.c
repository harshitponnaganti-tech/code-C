#include <stdio.h>

int main() {
    int a, b, c, x;
    // Read the four integers: A, B, C (cuboid dimensions) and X (cube edge length)
    if (scanf("%d %d %d %d", &a, &b, &c, &x) == 4) {
        int cuboid_vol = a * b * c;
        int cube_vol = x * x * x;
        
        if (cuboid_vol > cube_vol) {
            printf("Cuboid\n");
        } else if (cube_vol > cuboid_vol) {
            printf("Cube\n");
        } else {
            printf("Equal\n");
        }
    }
    return 0;
}
