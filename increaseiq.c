#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    // Check if Chef's IQ after adding 7 points is strictly greater than Einstein's IQ (170)
    if (x + 7 > 170) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
