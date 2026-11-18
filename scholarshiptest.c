#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);
    
    if (r >= 1 && r <= 50) {
        printf("100\n");
    } else if (r >= 51 && r <= 100) {
        printf("50\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
