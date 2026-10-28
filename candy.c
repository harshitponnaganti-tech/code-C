#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);
            // Check if the total number of candies N can be divided equally among 3 friends
            if (n % 3 == 0) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
