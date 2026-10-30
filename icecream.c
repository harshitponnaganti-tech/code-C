#include <stdio.h>

int main() {
    int X, Y;
    // Read the price of each ice cream (X) and the money Chef has (Y)
    scanf("%d %d", &X, &Y);
    
    // Check if the total cost for 2 ice creams (2 * X) is less than or equal to Y
    if (Y >= 2 * X) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
