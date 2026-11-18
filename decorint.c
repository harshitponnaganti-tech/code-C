#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Check if the number is divisible by 4
    if (n % 4 == 0) {
        n++; // Increment by 1
    } else {
        n--; // Decrement by 1
    }
    
    printf("%d\n", n);
    
    return 0;
}
