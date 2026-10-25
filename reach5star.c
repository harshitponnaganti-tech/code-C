#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    // Calculate Chef's new rating after the contest
    int new_rating = x + y;
    
    // Check if the new rating is 2000 or greater
    if (new_rating >= 2000) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
