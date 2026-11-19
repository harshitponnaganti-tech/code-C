#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int s, x, y, z;
        scanf("%d %d %d %d", &s, &x, &y, &z);
        
        int free_space = s - (x + y);
        
        if (free_space >= z) {
            printf("0\n");
        } else if (free_space + x >= z || free_space + y >= z) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    
    return 0;
}
