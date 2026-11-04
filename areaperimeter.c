#include <stdio.h>

int main() {
    int l, b;
    scanf("%d", &l);
    scanf("%d", &b);
    
    int area = l * b;
    int peri = 2 * (l + b);
    
    if (area > peri) {
        printf("Area\n");
        printf("%d\n", area);
    } else if (peri > area) {
        printf("Peri\n");
        printf("%d\n", peri);
    } else {
        printf("Eq\n");
        printf("%d\n", area);
    }
    
    return 0;
}
