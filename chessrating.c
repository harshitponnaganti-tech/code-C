#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Calculate the minimum number of games needed
        int diff = y - x;
        int games = (diff + 7) / 8;
        
        printf("%d\n", games);
    }
    return 0;
}
