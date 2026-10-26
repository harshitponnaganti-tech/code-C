#include <stdio.h>

int main() {
    int n;
    // Read the single integer N
    if (scanf("%d", &n) == 1) {
        // Check if N is 121 (Starters 121 is on Valentine's day)
        if (n == 121) {
            printf("Likely\n");
        } else {
            printf("Unlikely\n");
        }
    }
    return 0;
}
