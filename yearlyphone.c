#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    // Extract the last two digits and print with a zero-padding format specifier (%02d)
    printf("K%02d\n", x % 100);
    
    return 0;
}
