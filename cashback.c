#include <stdio.h>

int main() {
    int X;
    // Read the price of the cake
    scanf("%d", &X);
    
    // Check if the price is at least 200 to apply the cashback
    if (X >= 200) {
        printf("%d\n", X - 50);
    } else {
        printf("%d\n", X);
    }
    
    return 0;
}
