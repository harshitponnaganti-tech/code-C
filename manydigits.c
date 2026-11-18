#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n >= 0 && n <= 9) {
        printf("1\n");
    } else if (n >= 10 && n <= 99) {
        printf("2\n");
    } else if (n >= 100 && n <= 999) {
        printf("3\n");
    } else {
        printf("More than 3 digits\n");
    }
    
    return 0;
}
