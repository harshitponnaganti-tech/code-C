#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        
        // If the number of people (N) is less than or equal to 
        // the hall capacity (X), Chef can host the party.
        if (n <= x) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
