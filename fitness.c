#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int x;
        scanf("%d", &x);
        
        // Calculate total distance: X km * 2 (to and fro) * 5 (working days)
        int total_distance = x * 10;
        
        // Print the result for the current test case
        printf("%d\n", total_distance);
    }
    
    return 0;
}
